#include<bits/stdc++.h>
using namespace std;
class complexclasss{
    int a ;
    int b ;
    public:
    void add(int m , int n){
       a = m ;
       b = n ; 
    }
    void addbysum(complexclasss o1 , complexclasss o2){
        a = o1.a + o2.a ;
        b = o1.b + o2.b ;

    }
    void print(){
        cout << a << "+" << b <<"i"  << endl ;
    }

};

int main(){
    int a = 2 , b = 3 , c = 4 ;
    complexclasss c1 ;
    c1.add(a,b);
    c1.print() ;
    complexclasss c2 ;
    c2.add(b,c);
    c2.print() ;
    complexclasss c3 ;
    c3.addbysum(c1 , c2);
    c3.print() ;


return 0 ; 
}