#include<bits/stdc++.h>
using namespace std;


class Complex ;

class calulator{
    public:
    int add(int a , int b){
        return (a+b);
    }
    int addrealbysum(Complex o1 , Complex o2);
    int addcompbysum(Complex o1, Complex o2);

};

class Complex{
    int a , b ;
 //   friend int calulator :: addrealbysum(Complex o1 , Complex o2); 
//    friend int calulator :: addcompbysum(Complex o1 , Complex o2); 
  friend calulator ;

    public:
    void set_number(int x , int y){
        a = x;
        b = y ;
    }

    void print(){
        cout << "Your Number is " << a << " + " << b << "i" << endl ;
    }

};
int calulator :: addrealbysum(Complex o1 , Complex o2){
    return o1.a + o2.a ;
}
int calulator :: addcompbysum(Complex o1 , Complex o2){
    return o1.b + o2.b ;
}

int main(){
    Complex c1 , c2 ;
    c1.set_number(2,5);
    c1.print() ;
    c2.set_number(4,7);
    c2.print() ;
    calulator calc;
    int  res = calc.addcompbysum(c1, c2);
    int rec2 = calc.addrealbysum(c1 ,c2);
    cout << "Your Complex Number is " << rec2 << " + " << res << "i" << endl ;



return 0 ; 
}