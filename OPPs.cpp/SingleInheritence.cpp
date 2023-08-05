#include<bits/stdc++.h>
using namespace std;
class base{
    int a ,b ;
    public:
    base(){};
    base(int x ,int y){
        a = x ;
        b = y ;
    }
    void printdata();
};

void base :: printdata(){
    cout << "The Value of Data is " << a << " and " << b ;
}

class derived : public base{
    int data1 , data2 ;
    derived(int x , int y){
        data1 = x ;
        data2 = y ;
    }
    void setdata(int , int );

};
void derived :: setdata(int x , int y){
    data1 = 2 * x ;
    data2 = x * y ;
}

int main(){
 
return 0 ; 
}