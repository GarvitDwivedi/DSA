#include<bits/stdc++.h>
using namespace std;

class base1{
    int data1 ;
    public:
    base1(int a){
        cout << "Base1 class Constructor called" << endl ;
        data1= a ;
    }
    void printdatabase1(){
        cout << "The value of data 1 is " << data1 << endl ;
    }
};
class base2{
    int data2 ;
    public:
    base2(int a){
        cout << "Base2 class Constructor called" << endl ;
        data2= a ;
    }
    void printdatabase2(){
        cout << "The value of data 2 is " << data2 << endl ;
    }
};

class derived : public base2 , public base1{
    int a , b ;
    public:
    derived(int x , int y , int z , int w):base1(x) , base2(y){
        a = z ;
        b = w ;
        cout << "Derived class constructor called" << endl ;
    }
    void printdata(){
        cout << "The value of a is " << a << endl ;
        cout << "The value of b is " << b << endl ;
    }
};

int main(){
    derived d(1,2,3,4) ;
    d.printdatabase1() ;
    d.printdatabase2() ;
    d.printdata() ;

return 0 ; 
}