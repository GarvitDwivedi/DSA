#include<bits/stdc++.h>
using namespace std;

class Y ; /// FORWARD Declaration 

class X {
    int data ;
    friend void addTwoNumber(X , Y);
    public:
    void setdata(int value){
        data = value ;
    }
    void printdata(){
        cout << data << endl ;
    }
};

class Y {
    int data1 ;
    friend void addTwoNumber(X , Y);
    public:
    void setdata(int value1){
        data1 = value1 ;
    }
    void printdata(){
        cout << data1 << endl ;
    }
};

void addTwoNumber(X o1 , Y o2){
    cout << "The sum of two Number is " << o1.data +o2.data1;
}

int main(){
    X a ;
    a.setdata(23);
    Y b  ;
    b.setdata(24);
    addTwoNumber(a ,b);



return 0 ; 
}