#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
#include<vector>

int helper(vector<int> &weight ,vector<int> &value , int index , int maxWeight, vector<vector<int>>&dp){ /// recuseive as well as 
    // base case
    
    if(index == 0){
        if(weight[0] <= maxWeight){
            return value[0];
        }
        return 0 ;
    }
    if(dp[index][maxWeight] != -1){
        return dp[index][maxWeight];
    }
    // recursive call 
    int nottake =0+ helper(weight , value , index-1 , maxWeight ,dp);
    
    int take = INT_MIN ;
    if(weight[index] <= maxWeight){
        take =value[index] + helper(weight , value , index-1 , maxWeight- weight[index] , dp);
        }
    
    // return 
    return dp[index][maxWeight]= max(take , nottake);
    
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
    vector<vector<int>>dp(n , vector<int>(maxWeight+1 , -1));
    return helper(weight , value , n-1 , maxWeight ,dp );
}

int main(){
    int n ;
    cout << "Enter the Size of Array" << endl;
    cin >>  n ;
    int a; 
    int b ;
    vector<int>weight ;
    vector<int>value;
    for(int i = 0 ; i < n ;i++){
        cin >> a ;
        weight.push_back(a);
    }
    for(int i = 0 ; i < n ;i++){
        cin >> b ;
        value.push_back(b);
    }
    int maxweight;
    cout << "Enter the maxweight"  << endl;
    cin >> maxweight;
    cout << knapsack(weight , value , n , maxweight);

}