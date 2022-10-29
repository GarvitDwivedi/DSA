#include<iostream>
using namespace std ;
#include<string>

int main(){
    pair<int , int>p;
    p.first = 100 ;
    p.second = 20 ;

    cout << p.first << endl  ;
    cout << p.second << endl ;

    pair<char , int>p1;
    p1.second = 5 ;
    p1.first = 'c';
    cout << p1.first << endl  ;
    cout << p1.second << endl ;   

    pair<string , double>p2;
    p2.first = "geeksforfeeks" ;
    p2.second = 2.12;
    cout << p2.first << endl  ;
    cout << p2.second << endl ;  
    // WE CAN MAKE PAIR OF ANY DATA TYPE
}