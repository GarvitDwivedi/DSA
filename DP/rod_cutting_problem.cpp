int helper(int index , int n , vector<int>&price , vector<vector<int>>&dp){
    if(index == 0){
        return n*price[0];
    }
    if(dp[index][n] != -1){
        return dp[index][n];
}
    int nottake = 0 + helper(index-1 , n , price , dp);
    int take = INT_MIN ;
    int len = index+1 ;
    if(len <= n){
          take = price[index] + helper(index , n - len , price ,dp);
    }
    return dp[index][n]=max(take , nottake);
}

int cutRod(vector<int> &price, int n){
    int size = price.size() ;
    vector<vector<int>>dp(size , vector<int>(n+1 , 0));
	for(int i = 0 ;  i <= size; i++){
        dp[0][i] = i*price[0];
    }
    for(int i = 1 ; i < size ; i++){
        for(int j = 0 ; j <= n ; j++){
             int nottake = 0 + dp[i-1][j];
                int take = INT_MIN ;
                int len = i+1 ;
                if(len <= j){
          take = price[i] + dp[i][j -len];
    }
    dp[i][j]=max(take , nottake);
        }
    }
    return dp[size-1][n];
}
