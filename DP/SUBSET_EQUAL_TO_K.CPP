#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
#include<vector>

bool helper2(int n , int target , vector<int>&arr){
     if( target == 0){
        return true;
    }
    if(n == 0){
        if(arr[0] == target){
            return true ;
        }
        return false;
    }
    bool nottake = helper2(n-1 , target , arr );
    
    bool take = false;
    if(arr[n] <= target){
        take = helper2(n-1 , target- arr[n] , arr);
    }
    return  nottake || take ;
}
bool memo_rec(int n , int k , vector<int>&arr){
    return helper2(n-1 , k , arr);
}
bool helper(int n , int target , vector<int>&arr ,vector<vector<int>>&dp1){
    if( target == 0){
        return true;
    }
    if(n == 0){
        if(arr[0] == target){
            return true ;
        }
        return false;
    }
    if(dp1[n][target] != -1){
        return dp1[n][target];
    }
    bool nottake = helper(n-1 , target , arr ,dp1);
    
    bool take = false;
    if(arr[n] <= target){
        take = helper(n-1 , target- arr[n] , arr ,dp1);
    }
    return dp1[n][target] = nottake || take ;
}
bool subset_memo(int n , int k , vector<int>&arr){
    vector<vector<int>>dp1(n , vector<int>(k+1 , -1));
    return helper(n-1 , k , arr , dp1);
}




bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>>dp(n , vector<bool>(k+1 , 0));
    for(int i = 0 ; i < n ; i++){
        dp[i][0] = true ;
    }
    dp[0][arr[0]] = true;
    
    for(int i = 1 ; i < n ; i++){
        for(int target = 1 ; target <= k ; target++){
                bool nottake = dp[i-1][target];
                bool take = false;
                if(arr[i] <= target)
                take = dp[i-1][target - arr[i]];
                dp[i][target] = nottake | take ;  
    }
    }
    return dp[n-1][k];
}

int main(){
    int n ;
    cin >> n;
    vector<int>v;
    int a ;
    for(int i = 0 ; i < n ; i++){
        cin >> a ;
        v.push_back(a);
    }
    int k ;
    cout <<" enter the target" << endl;
    cin >> k ;
    cout << subsetSumToK(n , k , v) << endl ;
    cout << subset_memo(n , k , v) << endl;
    cout << memo_rec(n , k ,v);

}
