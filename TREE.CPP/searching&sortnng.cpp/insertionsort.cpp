#include<iostream>
using namespace std ;
int main(){
    int n , a[100] ;
    cout << "enter the size of array ------" << endl ;
    cin >> n ;
    cout << "Enter the element of array ------" << endl ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i]  ;
    }
    int min , j ;
    for(int i = 1 ; i < n ; i++){
        min = a[i] ;
        j = i -1 ;
        while(j >= 0 && a[j] > min){
            a[j+1]  = a[j] ;
            j = j -1 ;
        }
        a[j+1] = min ;
    }
    for(int i = 0 ; i < n ;i++){
        cout << a[i] << " " ;
    }

}