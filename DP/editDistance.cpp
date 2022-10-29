// we are given two string s1 ,s2 we have to make them equal by insrting , deleting or correction
#include<iostream>
using namespace std ;

int MinOperationTomakeEqual(string s1 , string s2){
    // base condition
    if(s1.size() == 0 || s2.size() == 0){
        return max(s1.size() , s2.size());
    }
    

    if(s1[0] == s2[0]){
        return MinOperationTomakeEqual(s1.substr(1) , s2.substr(1));
    }
    // insertion
    int x = 1 + MinOperationTomakeEqual(s1.substr(1) , s2);
    // deletion
    int y = 1 + MinOperationTomakeEqual(s1 , s2.substr(1));
    // replacing
    int z = 1 + MinOperationTomakeEqual(s1.substr(1) , s2.substr(1));

    return min(x , min(y , z));
}

int MinOperationTomakeEqual2(string s1 , string s2 , int ** output){
  	int m = s1.size();
	int n = s2.size();
	
	if(s1.size() == 0 || s2.size() == 0) {
		return max(s1.size(), s2.size());
	}

	// Check if ans already exists
	if(output[m][n] != -1) {
		return output[m][n];
	}

	int ans;
	if(s1[0] == s2[0]) {
		ans = MinOperationTomakeEqual2(s1.substr(1), s2.substr(1), output);
	}
	else {
		// Insert
		int x = MinOperationTomakeEqual2(s1.substr(1), s2, output) + 1;
		// Delete
		int y = MinOperationTomakeEqual2(s1, s2.substr(1), output) + 1;
		// Replace
		int z = MinOperationTomakeEqual2(s1.substr(1), s2.substr(1), output) + 1;

		ans =  min(x, min(y, z));
	}

	// Save the ans
	output[m][n] = ans;

	// Return the ans
	return ans;
}

int mindistanceusingDp(string s1 , string s2 ,int ** output){
    int m = s1.size();
    int n = s2.size();
    // filling rows
    for(int i = 0 ; i< n ; i++){
        output[0][i] = max(i,m);
    }
	for(int j = 0 ; j < n ; j++){
		
	}



}

int main(){
    string s1 ;
    string s2 ;
    cin >> s1 >> s2 ;
    int m = s1.size();
	int n = s2.size();
	int **ans = new int*[m+1];
	for(int i = 0; i <= m; i++) {
		ans[i] = new int[n+1];
		for(int j = 0; j <= n; j++) {
			ans[i][j] = -1;
		}
	}
    cout << MinOperationTomakeEqual2(s1 , s2 , ans);

}