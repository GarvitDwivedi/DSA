#include<iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>







 int helper2(int i , int j , vector<vector<int>>& grid ,vector<vector<int>>& dp ){
        if(i == 0 && j == 0){
            return grid[i][j];
        }
        if(i < 0 || j < 0){
            return 1e9;  
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int up = grid[i][j] + (helper2(i-1 , j , grid , dp));
        int left = grid[i][j] + helper2(i , j-1 , grid , dp);
        
        return min(up , left);
    }
    
    int minPathSum2(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>>dp(row , vector<int>(col , -1));
        return helper2(row-1 , col-1 , grid , dp);
    }

int helper(int i , int j  , vector<vector<int>>&grid){
    if(i == 0 && j == 0){
        return grid[i][j];
    }
    if( i < 0 || j < 0){
        return 1e9;
    }
    int up = grid[i][j] + helper(i-1 , j , grid);

    int left = grid[i][j] + helper(i , j-1 , grid);
    return min(up , left);
}

int min_path_sum(vector<vector<int>>&grid){
    int m = grid.size() ;
    int  n = grid[0].size() ;
    helper(m-1, n-1 , grid);
}


int main(){
    int n , m ;
    cin >> n >> m ;
  vector<vector<int> > d;
int val;
for(int i = 0; i < n; i++){
    vector<int> temp;
    for(int j = 0; j < m; j++){
        cin >> val;
        temp.push_back(val);
    }
    d.push_back(temp);
}
       cout <<  min_path_sum(d);
       cout << minPathSum2(d);
    }