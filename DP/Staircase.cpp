#include<iostream>
using namespace std ;
#include <bits/stdc++.h>

int staircase(int n){ // Recursive approach
    if( n <= 2){
        return n ;
    }
    if(n == 3){
        return 4 ;
    }
    int x = staircase(n-1);
    int y = staircase(n-2);
    int z = staircase(n-3);
    return x+y+z ;
}

int staircase2(int n){ // MEMOIZATION 
if(n <= 2){
    return n ;
}
if(n==3){
    return 4 ;
}
int *arr = new int[n+1];
for(int i = 0 ; i < n+1 ; i++){
    arr[i] = -1 ;
}
if(arr[n] != -1){
    return arr[n];
}
    int x = staircase2(n-1);
    int y = staircase2(n-2);
    int z = staircase2(n-3);
    int output = x + y + z ;
    arr[n] = output;
    return output ;
}

int staircase3(int n){ // DYNAMIC PROGRAMMING
    int *arr = new int[n+1];
    arr[1] = 1 ;
    arr[2] = 2 ;
    arr[3] = 4 ;

    for(int i = 4 ; i < n+1 ; i++){
    int x = arr[i-1];
    int y = arr[i-2];
    int z = arr[i-3];
    int output = x+y+z ;

    arr[i] = output ;
    }
    return arr[n];
}

int main(){
    int n ;
    cout << "Enter the number" << endl ;
    cin >> n ;
    cout << staircase3(n);
}