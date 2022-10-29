#include<iostream>
using namespace std ;
int binarysearch(int arr[] , int l , int u , int key){
    while(l <= u){
        int mid = l + (u-1) / 2 ;
        if(arr[mid] == key){
            return mid ;
        }
        else if(key > arr[mid]){
            l = mid+1 ;
        }
        else {
            u = mid-1 ;
        }
    }
    return -1 ;
}
int main(){
    int n , arr[100] ,key;
    cout << "Enter the size of array " << endl ;
    cin >> n ;
    cout << "Enter the array in sorted manner" << endl ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    cout << "Enter the element to be seacrh " << endl ;
    cin >> key ;
    int result =binarysearch(arr , 0 , n-1 , key);
    if(result != -1){
        cout << "THE elemnt found at location -> " << result ;
    }
    else{
        cout << "the element is not present in the array !!!!!!!!!!!!" << endl ;
    }

}