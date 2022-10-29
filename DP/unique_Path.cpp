#include<iostream>
using namespace std ;
#include<vector>


 int helper2(int i , int j , vector<vector<int>>&dp){ // MEMOIZATION
        if(i == 0 && j ==0){
            return 1;
        }
        if(i < 0 || j < 0){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int up = helper2(i-1 , j , dp);
        int left = helper2(i , j-1 , dp);
        
        dp[i][j] =  up+left ;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m , vector<int>(n , -1));
        return helper2(m-1 , n-1 , dp);
    }
int helper(int i , int j){ // RECURSICVE SON
    if(i == 0 && j == 0){
        return 1 ;
    }
    if(i < 0 || j < 0){
        return  0;
    }
    int up =  helper(i-1 , j);
    int left = helper(i , j-1);

    return up+left;
}

int unique_Path(int n , int m ){
    return helper(n-1 , m-1);
}

int main(){
    int n , m ;
    cin >> n >> m ;
    cout << unique_Path(n , m ) << endl;
    cout << uniquePaths(n , m ) << endl;

    

}