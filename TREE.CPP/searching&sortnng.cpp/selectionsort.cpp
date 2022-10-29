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
    int min_ind ;
    for(int i = 0 ; i < n ; i++){
        min_ind = i ;
        for(int j = i+1 ; j < n ; j++){
            if(a[j] < a[min_ind]){
                min_ind = j ;

                int temp = a[min_ind];
                 a[min_ind] = a[i] ;
                a[i] = temp ;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " " ;
    }
}