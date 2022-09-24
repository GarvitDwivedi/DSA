#include<iostream>
using namespace std;
#include<vector>

    int helper(vector<int>& nums , int index){ // Recursion
        if(index == 0){
            return nums[index];
        }
        if(index < 0){
            return 0 ;
        }
        int pick = nums[index]+helper(nums ,index-2);
        
        int notpick = 0 + helper(nums ,index-1);
        
        return max(pick , notpick);
    }

/// MEMOIZATION
  int helper2(vector<int>& nums , int index){
        if(index == 0){
            return nums[index];
        }
        if(index < 0){
            return 0 ;
        }
        int *dp = new int[index+1];
    for(int i = 0 ; i < index+1 ; i++){
        dp[i] = -1 ;
    }
      if(dp[index] != -1){
           return dp[index];
      }
        
        int pick = nums[index]+helper(nums ,index-2);
        
        int notpick = 0 + helper(nums ,index-1 );
        
        dp[index]  =  max(pick , notpick);
        return dp[index];
    }

int main(){
    int n ;
    cout << "enter the size of array" << endl ;
    cin >> n ;
    int a ;
    vector<int>nums;
    for(int i = 0 ; i < n ; i++){
        cin >> a ;
        nums.push_back(a);
    }
    int ans =  helper2(nums , n-1);
    cout << ans; 
    return 0 ;

} 
