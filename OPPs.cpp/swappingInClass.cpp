#include<bits/stdc++.h>
using namespace std;
// Forward declarion 
class Y ;
class X{
    int data ;
    friend void SwapVlaue(X & , Y &);
    public:
    void setdata(int x){
        data = x ;
    }
    void printdata(){
        cout << "The data in the class " << data << endl ;
    }
};
class Y{
    int data1 ;
    friend void SwapVlaue(X & , Y &);
    public:
    void setdata(int x){
        data1 = x ;
    }
    void printdata(){
        cout << "The data in the class " << data1 << endl ;
    }
};

void SwapVlaue(X & o1 , Y & o2){
    int temp = o1.data;
    o1.data = o2.data1 ;
    o2.data1 = temp ;
}
int main(){
    X a ;
    a.setdata(12);
    Y b ;
    b.setdata(35);

    SwapVlaue(a ,b);
    cout << "After swapping the value class 1 of the private member is " <<endl;
    a.printdata();
    b.printdata() ;

return 0 ; 
}