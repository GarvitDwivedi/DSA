#include<bits/stdc++.h>
using namespace std ;
int helper(int n , int &sum){
    if(n == 0 ){
        return 0 ;
    }
    sum = sum + n + helper(n-1 , sum);

    return sum ;
}

int main(){
    int n ;
    cin >> n ;
    int sum = 0 ;
    cout << helper(n  , sum );
}