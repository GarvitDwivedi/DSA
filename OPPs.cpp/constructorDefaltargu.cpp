#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a , b ;
    public:
    Complex(){};
     Complex(int x , int y = 8){
        a = x ;
    }
    Complex(int x ,int y){
        a =x ;
        b = y ;
    }
    void showNumber(){
        cout << a << "and" << b ;
    }

};
int main(){
    Complex c1(1,4);
    c1.showNumber() ;
    Complex c2(3);
    c2.showNumber() ;




return 0 ; 
}