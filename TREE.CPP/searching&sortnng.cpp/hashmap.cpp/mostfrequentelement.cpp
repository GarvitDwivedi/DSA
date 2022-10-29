#include<iostream>
#include<unordered_map> 
#include<utility>
using namespace std ;
/*
void mostfrequentelement(int arr[] , int n ){
    unordered_map<int , int> freq ;
    for(int i = 0 ;  i < n ; i++){
        freq[arr[i]]++ ;
    }
    int key = 0 ;
    int value = 0 ;

    for(int i = 0 ; i < n ; i++){
        if(freq[arr[i]] > value){
            key = arr[i] ;
            value = freq[arr[i]];
        }
    }
    cout << key ;

}
*/

void mostfrequentelement(int arr[] , int n){
    unordered_map<int , int > freq ;
    for(int i = 0 ; i < n ; i++){
        freq[arr[i]]++ ;
    }
    unordered_map<int , int> :: iterator it ;
    for(it = freq.begin() ; it != freq.end() ; it++){
        cout << it -> first << " " << it->second << endl ;
    }
}


int main(){
    int  n ; 
    cin >> n ;
    int arr[100] ;
    for(int i = 0 ;  i < n ; i++){
        cin >> arr[i] ;
    }
    mostfrequentelement(arr , n) ;
}
