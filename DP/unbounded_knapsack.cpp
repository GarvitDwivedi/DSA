#include<iostream>
using namespace std ;
#include<vector>
#include <bits/stdc++.h> 
int helper(int index , int target , vector<int> &profit , vector<int> &weight , vector<vector<int>>&dp){
    if(index == 0){
            return (profit[index]*(target / weight[0]));
        } 
    if(dp[index][target] != -1){
        return dp[index][target];
    }
    int nottake = 0 + helper(index-1 , target , profit , weight, dp);
    int take  = INT_MIN ;
    if(weight[index] <= target){
        take = profit[index] + helper(index , target - weight[index] , profit , weight ,dp);
    }
    return dp[index][target] =  max(take , nottake);
    
}
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<vector<int>>dp(n , vector<int>(w+1 , 0));
    for(int i = 0 ; i <= w ; i++){
        dp[0][i] = (profit[0]*(i / weight[0]));
    }
    for(int i = 1 ; i < n ; i++){
        for(int tar = 0 ; tar <= w ; tar++){
                int nottake = 0 + dp[i-1][tar];
                int take  = 0;
                if(weight[i] <= tar){
                take = profit[i] + dp[i][tar - weight[i]];
    }
     dp[i][tar] =  max(take , nottake);
        }
    }
    return dp[n-1][w];
}

int main()
{
	int n;
	cin >> n;
int a ;
 int b ;
	vector<int>weights;

    vector<int>values;

	for (int i = 0; i < n; i++)
	{
        cin >> a ;
		weights.push_back(a);
	}

	for (int i = 0; i < n; i++)
	{
        cin >> b ;
		values.push_back(b);
	}

	int maxWeight;
	cin >> maxWeight;

	cout << unboundedKnapsack(n , maxWeight  , weights , values) << endl;
}