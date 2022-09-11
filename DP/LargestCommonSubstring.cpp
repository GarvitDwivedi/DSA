#include<iostream>
using namespace std ;
#include<string>

int LCS(string t , string v){ // RECURSION 
    // base case
    if(t.size() == 0 ||  v.size() == 0){
        return 0 ;
    }
    // recursive call
    if(t[0] == v[0]){
        return 1 + LCS(t.substr(1) , v.substr(1));
    }
    int x = LCS(t.substr(1) , v) ;
    int y = LCS(t , v.substr(1));
    int z = LCS(t.substr(1) , v.substr(1));
    return max(x , max(y , z));
}
int LCS2_HELPER(string t , string v , int ** output){ // MEMOIZATION
    int m = v.size() ;
    int n = t.size();

    if(n == 0 || m == 0){
        return 0 ;
    }
    if(output[n][m] != -1){
        return output[n][m];
    }
    if(t[0] == v[0]){
        return 1+LCS2_HELPER(t.substr(1) , v.substr(1), output);
    }
    
    int x = LCS2_HELPER(t.substr(1) , v ,  output);
    int y = LCS2_HELPER(t , v.substr(1) , output);
    int z = LCS2_HELPER(t.substr(1) , v.substr(1) ,  output);

    int ans = max(x , max(y,z));
    output[n][m] = ans ;
    return ans ;

}

int LCS2(string t , string v){
    int m = t.size();
    int n = v.size();
     int **output = new int*[n+1];
    for(int i = 0; i <= m; i++) {
        output[i] = new int[n+1];
        for(int j = 0; j <= n; j++) {
            output[i][j] = -1;
        }
    }

    return LCS2_HELPER(t , v , output);
}

int lcs_DP(string s, string t) {
	int m = s.size();
	int n = t.size();
	int **output = new int*[m+1];

	for(int i = 0; i <= m; i++) {
		output[i] = new int[n+1];
	}

	// Fill 1st row
	for(int j = 0; j <= n; j++) {
		output[0][j] = 0;
	}

	// Fill 1st col
	for(int i = 1; i <= m; i++) {
		output[i][0] = 0;
	}

	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			// Check if 1st char matches
			if(s[m-i] == t[n-j]) {
				output[i][j] = 1 + output[i-1][j-1];
			}
			else {
				int a = output[i-1][j];
				int b = output[i][j-1];
				int c = output[i-1][j-1];
				output[i][j] = max(a, max(b, c));
			}
		}
	}
	return output[m][n];
}
int main(){
    string t , v ;
    cin >> t >> v ;
     int m = t.size();
    int n = v.size();
     int **output = new int*[m+1];
    for(int i = 0; i <= m; i++) {
        output[i] = new int[n+1];
    }
    cout << LCS(t , v ) << endl;
    cout << LCS2(t , v) << endl ;
    cout << lcs_DP(t , v);

}