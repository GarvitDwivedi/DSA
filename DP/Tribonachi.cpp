#include<iostream>
using namespace std ;

int tribonachi_rec(int n){
    if(n == 0 ||n == 1){
        return n ;
    }
    if(n == 2 ){
        return 1 ;
    }
    int x = tribonachi_rec(n-1);
    int y = tribonachi_rec(n-2);
    int z = tribonachi_rec(n-3);

    return x+y+z ;

}

int tribonachi_memo(int n , int *dp){
    if(n == 1 || n == 0){
        return n ;
    }
    if(n == 2){
        return 1 ;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int x = tribonachi_memo(n-1 , dp);
    int y = tribonachi_memo(n-2 , dp);
    int z = tribonachi_memo(n-3 , dp);

    dp[n] = x+y+z ;
    return dp[n];
}

int tribonachi_dp(int n ){
    int *Dyp = new int[n+1];

    Dyp[0] = 0 ;
    Dyp[1] = 1 ;
    Dyp[2] = 1 ;

    for(int i = 3 ; i < n+1 ; i++){
        Dyp[i] = Dyp[i-1] + Dyp[i-2] + Dyp[i-3]; 
    }
    return Dyp[n];
}



int main(){
    int n ;
    cout << "enter the number" << endl ;
    cin >> n ;
    int *dp = new int[n+1];
    for(int i = 0 ; i < n+1 ; i++){
        dp[i] = -1;
    }
    cout << tribonachi_dp(n) << endl;
    cout << tribonachi_rec(n) << endl;
    cout << tribonachi_memo(n, dp) << endl;


}