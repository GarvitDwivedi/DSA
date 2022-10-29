#include<iostream>
using namespace std;
#include <bits/stdc++.h>
#include<cmath>

int countbalanced(int n){ //RECURSIVE APPPROACH  -->        0
    if( n== 0 || n ==1){                       //         /   \   
        return 1 ;
    }
    int x = countbalanced(n-1);
    int y = countbalanced(n-2);
    int ans  = (x * x) + (2 * x * y );
    return ans ;
}

int countbalanced2(int h){  // Memoization
    if(h == 1  || h==0){
        return 1 ;
    }
    int *arr = new int[h+1];
    for(int i = 0 ; i < h+1 ; i++){
        arr[i] == -1 ;
    }
    if(arr[h] != -1){
        return arr[h];
    }
   long mod = (int) (pow(10, 9)) + 7;
	long x = countbalanced2(h - 1);
	long y = countbalanced2(h - 2);

	long temp1 = (int)(((long)(x)*x) % mod);
	long temp2 = (int)((2* (long)(x) * y) % mod);
	long ans = (temp1 + temp2) % mod;

    arr[h] = ans ;
    return arr[h];
}

int balacncedcount3(int n){ // DP 
    int *arr = new int[n+1];
    arr[0] = 1 ;
    arr[1] = 1 ;

    int mod = (int)(pow(10,9)+7);
    for(int i = 2 ; i < n+1 ; i++){
        arr[i]=(int)( ( (long)(arr[i-1])*arr[i-1] )%mod + (2*(long)(arr[i-1])*arr[i-2])%mod  ) % mod;
    }
    return arr[n];
}
int main(){
    int height ;
    cout << "Enter the Height" << endl ;
    cin >> height ;
    cout << balacncedcount3(height);
}