#include<iostream>
using namespace std ;
#include<unordered_set>

int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(15);
    s.insert(20);
    for(int x : s){
        cout << x << endl ;
    }
    cout << "SECOND WAY TO PRINT" << endl ;
    for(auto it = s.begin() ; it!= s.end() ; it++){
        cout << *it << endl ;
    }
    cout << "THE SIZE OF STACK" << endl ;
    cout << s.size() << endl;//for find the no of element ;

    if(s.count(15)){
        cout << " found " << endl ;
    }
    else{
        cout << " not found" << endl; 
    }

    cout << "FOR FINDING AN ELEMENT" << endl ;
    if(s.find(15) == s.end()){
        cout << "not found" << endl ;
    }
    else{
        cout << "FOUND" << endl ;
    }

    cout << "ERASING THE ELEMENT OF SET" << endl ;
    s.erase(15) ;
    for(int x : s){
        cout << x << endl ;
    }
    cout << "FOR ERASING THE ELEMENT OF SET IN A RANGE" << endl ;
    s.erase(s.begin() , s.end());
    for(int x :s){
        cout << x << endl ;
    }

}