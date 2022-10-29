#include<iostream>
using namespace std ;
#include<vector>


//RECURSIVE SOL ;
    int min_path(int i , int j ,vector<vector<int>>& triangle , int  n ){
        if(i == n-1){
            return triangle[i][j];
        }
        int d = triangle[i][j] + min_path(i+1 , j ,triangle, n );
        int dl = triangle[i][j] + min_path(i+1 , j+1 , triangle , n );
        
        
        return min(d,dl);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size() ;
        return min_path( 0 , 0 , triangle , n );   
    }

    //MEMOIZATION
        int min_path2(int i , int j ,vector<vector<int>>& triangle , int  n ,  vector<vector<int>>& dp){
        if(i == n-1){
            return triangle[i][j];
        }
        if(dp[i][j] != -1){
            return dp[i][j];
}
        int d = triangle[i][j] + min_path(i+1 , j ,triangle, n  , dp);
        int dl = triangle[i][j] + min_path(i+1 , j+1 , triangle , n  , dp);
        
        dp[i][j] =  min(d,dl);
        return dp[i][j];
    }
    
    int minimumTotal2(vector<vector<int>>& triangle) {
        int n = triangle.size() ;
        vector<vector<int>>dp(n , vector<int>(n , -1));
        return min_path2( 0 , 0 , triangle , n , dp);
             
    }
int main(){
    vector<vector<int>>triangle ;

}