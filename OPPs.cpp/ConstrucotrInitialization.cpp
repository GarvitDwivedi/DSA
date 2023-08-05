#include<bits/stdc++.h>
using namespace std;

class test{
    int a ,b ;
    public:
    test(int x ,int y):a(x+4) , b(a+y){
        cout << "Constructor called" << endl;
        cout << "The value of a & b is "<< a << " and " << b << endl ; 
    }
};

// Note --- we cannot use the value of b before a becouse a is declared first the number which is declared 
//first will be used 
int main(){
    test(3,4);
return 0 ; 
}