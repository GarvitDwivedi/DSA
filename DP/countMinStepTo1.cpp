#include<iostream>
using namespace std ;
#include <bits/stdc++.h>


int minsteps(int n ){ // RECURSIVE STEPS 
    int y = INT_MAX ;
    int z = INT_MAX ;
    if( n <= 1){
        return 0 ;
    }
    int x = minsteps(n-1);
    if(n%2 == 0){
        y = minsteps(n/2);
    }
    if(n%3 == 0){
        z = minsteps(n/3);
    }
    int ans = min(x , min(y ,z))+1;
    return ans ;
}
int minstrpes_helper(int n , int *arr){ // MEMOIZATION
    if(n <= 1){
        return 0 ;
    }

    if(arr[n] != -1){
        return arr[n];
    }

    int x =minstrpes_helper(n-1 , arr);
    int y = INT_MAX ;
    int z = INT_MAX ;

    if(n%2 == 0){
        y = minstrpes_helper(n/2 , arr);
    }
    if(n%3 == 0){
        
        z = minstrpes_helper(n/3 , arr);
    }
    int output = (min(x , min(y , z)) )+ 1;

    arr[n] = output ;
    return output;

}

int minstrep2(int n){ // MEMOIZATION 
    int *arr = new int[n+1];
    for(int i = 0 ; i < n+1 ; i++){
        arr[i] = -1;
    }
    return minstrpes_helper(n , arr);
}


int minsteps3(int n ){ // using dp
int *arr = new int(n+1);
arr[0] = 0 ;
arr[1] = 0 ;

for(int i = 2 ; i < n+1 ; i++){
    if(n%2!= 0 && n%3 != 0){
        arr[i] = min(arr[i-1] , min(arr[i/2] , arr[i/3]))+1;
    }else if(n % 3 != 0 && n % 2 == 0){
        arr[i] = min(arr[i-1] , arr[i/2] )+1;
    }
    else if(n % 3 == 0 && n % 2 != 0){
        arr[i] = min(arr[i-1] , arr[i/3] )+1;
    }else{
        arr[i] = arr[i-1]+1;
    }
}
return arr[n];
} 

int main(){
    int n ;
    cout << "enter the number " << endl ;
    cin >> n ;
    cout << minsteps(n);

}