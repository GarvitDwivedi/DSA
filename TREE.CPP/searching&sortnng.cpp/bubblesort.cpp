#include<iostream>
using namespace std ;
int main(){
    int n , arr[100];
    cout << "enter the size of array" << endl ;
    cin >> n ;
    cout << "enter the array " << endl ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
    cout << "THE ARRAY AFTER SORTING --------" << endl ;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " "  ;
    }

}