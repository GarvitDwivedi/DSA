#include<iostream>
using namespace std ;
#include<set>

int main(){
    set<int>s1 ;
    int n ;
    s1.insert(15);
    s1.insert(1);
    s1.insert(5);
    s1.insert(115);
    s1.insert(153);
    s1.insert(152);
    s1.insert(155);
    for(int x : s1){
        cout << x << " " ;
    }
    cout << endl ;

    cout << "THE SIZE OF THE SET" << " " << s1.size() << endl ;

    for(auto it = s1.rbegin() ; it!= s1.rend() ; it++){
        cout << *it << " " ; // print in reverse order
    }
    cout << endl ;

    if(s1.find(1) != s1.end()){
        cout << "present" << endl ;
    }

    auto in = s1.lower_bound(6) ;
    if(in != s1.end()){
        cout << *in << endl ;
    }
    

    auto g = s1.upper_bound(6);
    if(g != s1.end()){
        cout << *g << endl ;
    }


    // using erase function ;
    s1.erase(15) ;
    for(int x : s1){
        cout << x << " " ;
    }
    cout << endl ;
    s1.erase(s1.begin() , s1.end());
    for(int x : s1){
        cout << x << " " ;
    }
    cout << endl ;
}