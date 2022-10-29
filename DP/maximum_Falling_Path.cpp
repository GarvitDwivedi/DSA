#include<iostream>
using namespace std ;
#include<vector>

#include <bits/stdc++.h> 
int getMaxPathSum(vector<vector<int>> &matrix){
    int m = matrix.size() ;
    int n = matrix[0].size() ;
    vector<vector<int>>dp(m , vector<int>(n , 0));
    for(int j = 0 ; j < n ; j++){
        dp[0][j] = matrix[0][j];
    }
    for(int i = 1 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            int x = matrix[i][j] + dp[i-1][j];
            int y , z ;
            if(j-1 >=0){
             y = matrix[i][j] + dp[i-1][j-1];
            }
            else{
                y += -1e8 ;
            }
            if(j+1 < n){
             z = matrix[i][j] + dp[i-1][j+1];
            }
            else{
                z+= -1e8 ;
            }
            dp[i][j] = max(x , max(y,z));
        }
    }
    int maxi = dp[m-1][0] ;
    for(int j = 0  ; j < n ; j++){
        maxi = max(maxi , dp[m-1][j]);
    }
return maxi ;
}

int helper(int i , int j , vector<vector<int>>&matrix , vector<vector<int>>&dp){ // memoized
    if(j > matrix[0].size()  || j < 0){
        return -1e8 ;
    }
    if(i == 0){
        return matrix[0][j];
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int x = matrix[i][j] + helper(i-1 , j , matrix,dp);
    int y = matrix[i][j] + helper(i-1 , j-1 , matrix , dp);
    int z = matrix[i][j] + helper(i-1 , j+1 , matrix , dp);
    
    int ans =  max(x , max(y , z));
    dp[i][j] = ans ;
    return ans ;
}

int maximum_falling_path(vector<vector<int>>&matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>>dp(m , vector<int>(n , -1));
    return helper(m , n , matrix , dp);
}

int main(){
    int n , m ;
    cin >> n >> m ;
    int a ;
    vector<vector<int>>matrix ;
    vector<int>res ;
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a ;
            res.push_back(a);
        }
        matrix.push_back(res);
    }
    cout << maximum_falling_path(matrix);
}