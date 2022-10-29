#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std ;

vector<int>removeduplicate(int *arr , int size){
    vector<int>output ;
    unordered_map<int , bool>dup ;
    for(int i = 0 ; i < size ; i++){
        if(dup.count(arr[i])  > 0){
            continue;
        }
        else{
            dup[arr[i]] = true ;
            output.push_back(arr[i]);
        }
    }
    return output ;
}
int main(){
    int arr[100] = {1,1,2,2,2,2,3,44,5,5,3,2,2} ;
    int n = 13 ;
    vector<int>output = removeduplicate(arr , n );
    for(int i = 0 ; i < output.size() ; i++){
        cout << output[i] << " " << endl ;
    }
}