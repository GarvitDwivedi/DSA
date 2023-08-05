#include<bits/stdc++.h>
using namespace std;
class base1{
    protected:
    int base1int ;
    public:
    void set_number1(int a){
        base1int = a ;
    }
};
class base2{
    protected:
    int base2int ;
    public:
    void set_number2(int a){
        base2int = a ;
    }
};
class base3{
    protected:
    int base3int ;
    public:
    void set_number3(int a){
        base3int = a ;
    }
};

// inheiting all the class 
class derived : public base1 ,public base2 ,public base3 {
    public:
    void show(){
        cout << "thE VALUE OF base1int is " << base1int << endl ;
        cout << "thE VALUE OF base2int is " << base2int << endl ;
        cout << "thE VALUE OF base3int is " << base3int << endl ;
        cout << "The sum of all the data is " << base1int + base2int + base3int << endl ;
    }
};
int main(){
    derived dd ;
    dd.set_number1(23);
    dd.set_number2(1);
    dd.set_number3(12);
    dd.show() ;

return 0 ; 
}