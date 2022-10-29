#include<iostream>
using namespace std ;
int main(){
    int n , a[100] , key;
    cout << "enter the size of array " << endl;
    cin >> n ;
    cout << "enter the element of array" << endl ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    } 
    cout << "Enter the element to be search" << endl ;
    cin >> key ;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == key){
            cout << "THE element found at the location -> " << i << endl ;
            break ;
        }
    }
    
    
}