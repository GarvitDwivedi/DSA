#include<iostream>
#include<unordered_map>
#include<string>
using namespace std ;
int main(){
    unordered_map<string , int> ourmap ;
    ourmap["abc"] = 1 ;
    ourmap["abc1"] = 2 ;
    ourmap["abc2"] = 3 ;
    ourmap["abc3"] = 4 ;
    ourmap["abc4"] = 5 ;
    ourmap["abc5"] = 6 ;
    ourmap["abc6"] = 7 ;

    unordered_map<string , int>:: iterator it ;
    for(it = ourmap.begin() ; it != ourmap.end() ; it++){
        cout << "key -> "<< it->first << "  value->  " << it->second << endl  ;
    } 


}