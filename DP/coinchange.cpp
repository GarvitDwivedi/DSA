#include<iostream>
using namespace std ;
#include<vector>
#include <bits/stdc++.h> 
 int helper(vector<int>& coins , int amount , int index , vector<vector<int>>&dp){
        // base case 
        if(index == 0){
            if(amount % coins[0] == 0){
                return amount/coins[0] ;
            }
         return 1e9;
        }
        
        // recursive calls 
        if(dp[index][amount] != -1){
            return dp[index][amount];
}
        int nottake = 0 + helper(coins , amount , index- 1 ,dp);
        
        int take = INT_MAX ;
        if(coins[index] <=  amount){
            take = 1 + helper(coins , amount - coins[index] , index ,dp);
        }
        // return 
        return dp[index][amount] = min(take , nottake);
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n , vector<int>(amount+1 , -1));
        int ans =  helper(coins , amount , n-1 , dp);
        if(ans >= 1e9){
            return -1;
        }
        return ans ;
    }

int main(){
    int n ;
    cout << "enter the size of arry" << endl ;
    cin >> n ;
    vector<int>coins; 
    int a ;
    for(int i = 0 ; i < n ; i++){
        cin >> a ;
        coins.push_back(a);
    }
    int amount ;
    cout << "Enter The aMOUnt to be generated" << endl;
    cin >> amount ;

    cout << coinChange(coins , amount );

}