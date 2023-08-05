#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a , b ;
    public:
    
    Complex(){
        a = 0 ;
        b=  0;
    }
    Complex(int x){
        a = x ;
        b= 0 ;
    }
    Complex(int x ,int y){
        a = x ;b = y ;
    }
      void printvalue()
    {
        cout << "The value of the ComplexNo is " << a << " + " << b << "i" << endl;
    }
};
int main(){
    Complex c1;
    c1.printvalue() ;
    Complex c2(2);
    c2.printvalue() ;
    Complex c3(5,8);
    c3.printvalue() ;

return 0 ; 
}