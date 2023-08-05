#include<bits/stdc++.h>
using namespace std;

class point{
    int a , b ;
    public:
    point(int x ,int y){
        a = x ;
        b = y ;
    }
    void print(){
        cout << "The points are ( " << a << " , " << b << " ) " << endl ;
    }

    ~point(){
        cout << "Destructor is Called " << endl ;
    }
};

int main(){
    point p1(2,3);
    p1.print() ;
return 0 ; 
}