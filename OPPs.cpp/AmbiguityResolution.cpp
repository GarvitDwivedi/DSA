#include<bits/stdc++.h>
using namespace std;

class base1{
    public:
    void greet(){
        cout << "Hello Gud Morning " << endl ;  
    }
};

class base2{
    public:
    void greet(){
        cout << "Pranipat " << endl ;  
    }
};
class base3{
    public:
    void greet(){
        cout << "Har Har Mahadev " << endl ;  
    }
};

class derived : public base1 , public base2  , public base3 {
    // if we can specify the member of which class to be used so we can solve the issue 9.0
    public:
    // void greet(){
    //     base1 :: greet() ;
    // }
     void greet(){
        cout << "Har Har Mahadev " << endl ;  
    }

};

int main(){
    derived d ;
 //   d.greet(); // Ambiguity Due to multiple class with same name in differt class  9.0
 d.greet();
  

return 0 ; 
}
