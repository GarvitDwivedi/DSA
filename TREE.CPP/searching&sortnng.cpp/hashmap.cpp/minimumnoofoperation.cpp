#include<iostream>
using namespace std ;
#include<vector>

int makepalindrome(vector<int> v){
    int n = v.size() ;
    int count = 0 ;
    int j = n-1 ;
    int i = 0 ;
    while(i < j){
        if(v[i] > v[j]){
            v[j-1] = v[j];
            count++ ;
            j--; 
        }
        else if(v[i] < v[j]){
            v[i+1] = v[i+1]+v[i];
            count++ ;
            i++;
        }
        else{
            i++ ;
            j-- ;
        }
    }
    return count ;
}

int main(){
    vector<int>ve = {6,1,4,3,1,7};
    cout << makepalindrome(ve);

}