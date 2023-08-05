#include<bits/stdc++.h>
using namespace std;

class pointer{
    int a , b ;
    public:
    void setdata(int x ,int y){
        a = x ;
        b = y ;
    }
    void printdata(){
        cout << "The Value of a  and b is " << a << " and " << b ; 
    }
    };
int main(){
    pointer p ;
    pointer *ptr = &p;

    
    (*ptr).setdata(12, 43); // this can be used to initailze or the -> operator can be used
    ptr->printdata() ;
   // p.printdata();
return 0 ; 
}