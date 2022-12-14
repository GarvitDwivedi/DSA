#include<iostream>
using namespace std ;

int fibbo3(int n ){    // DYNAMIC PROGRAMIING APPROACH
    int *arr = new int[n+1];
    arr[0] = 0 ;
    arr[1] = 1 ;
    for(int i = 2 ; i < n+1 ; i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    return arr[n];

}


int fiboo_rec(int n){ // RECURSIVE APPROACH
    if(n <= 1){
        return n ;
    }
    int a = fiboo_rec(n-1);
    int b = fiboo_rec(n-2);

    return a+b ;
}
int fibbo_helper(int n , int *arr){ // MEMOIZATION ApPROACH TOP DWON APPREACH 
    if(n <= 1){
        return n ;
    }
    if(arr[n] != -1){
        return arr[n];
    }
    int a = fibbo_helper(n-1 , arr);
    int b = fibbo_helper(n-2, arr);

    arr[n] = a+b ;
    return arr[n] ;
}

int fibbo(int n){
    int *arr = new int[n+1];
    for(int i = 0 ; i < n+1 ; i++){
        arr[i] = -1 ;
    }
    return fibbo_helper(n , arr);

}

int main(){
    int n ;
    cout << "enter the number" << endl ;
    cin >> n ;
    cout <<  fibbo(n) << endl;
    cout << fibbo3(n)<< endl ;
}
