#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;

int unique(vector<int>arr , int size){
    unordered_map<int , int > freq ;
    for(int i = 0 ; i < size ; i++){
        freq[arr[i]]++ ;
    }
    for(int i = 0 ; i < size ; i++){
        if(freq[arr[i]] == 1){
            return arr[i] ;
        }
    }
    return -1 ;
}
int main(){
    vector<int>arr{1,1,22,22,44,55,55} ;
    int size = 11 ;
    cout << unique(arr , size ) ;
}