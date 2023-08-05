#include<bits/stdc++.h>
using namespace std;
class base{
    int data1 ;
    public:
    int data2 ;
    void setdata(int x,int y);
    int getdata1();
    int getdata2() ;

};
void base :: setdata(int x ,int y){
    data1 = x ;
    data2 = y ;
}
int base :: getdata1(){
    return data1 ;
}
int base :: getdata2(){
    return data2 ;
}

class derived : public base{
    int a ;
    public:
    void setdata_d() ;
    void printdata() ;

};
void derived :: setdata_d(){
    a = (3 * getdata2());
}

void derived :: printdata() {
    cout << "The product of numbers is " << a  << endl ;
}


int main(){
    derived dd ;
    dd.setdata(3 ,5);
    dd.setdata_d();
    dd.printdata();

return 0 ; 
}