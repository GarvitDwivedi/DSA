#include<iostream>
#include<string>
#include<unordered_map>
using namespace std ;

int main(){
    unordered_map<string, int> ourmap;
    // insertion of element 
    pair<string , int>p("abc" , 1);
    ourmap.insert(p) ;
    // inserting element using array technique
    ourmap["def"] = 2 ;
    ourmap["gef"] = 3 ;

    // ACEESING ELEMENT OF THE MAP 
    cout << ourmap["abc"] << endl ;
    cout << ourmap["gef"] << endl ;
    // other way to find value is at
    cout << ourmap.at("abc") << endl ;
    cout << "size -> " << ourmap.size() << endl ;
  //  cout << ourmap.at("ghi") << endl ; // if value is not present exception occurs ;

    cout << ourmap["mon"] << endl ;
// presence of element 
    if(ourmap.count("mno") > 0){
        cout << "It is Present" << endl ;
    }
    cout << "size -> " << ourmap.size();
 }
