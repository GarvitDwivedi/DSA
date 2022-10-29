#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;

int maximumfrequecny(vector<int>arr , int size){
    int max_ele = 1 ;
    int res = arr[0] ;
    int curr_con = 1 ;
    for(int i = 1 ; i < size ; i++){
        if(arr[i] = arr[i-1]){
            curr_con++ ;
        }
        else{
            curr_con = 1 ;
        }
        if (curr_con > max_ele) {
            max_ele = curr_con;
            res = arr[i - 1];
    }
    }
     return res ;
}
int main(){
    vector<int>arr{1,1,1,2,3,3,3,3,3,4,5,6,7,8,8,8,8,8} ;
    int size = 11 ;
    cout << maximumfrequecny(arr , size ) ;
}