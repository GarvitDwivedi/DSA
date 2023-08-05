#include<bits/stdc++.h>
using namespace std;
class Base_class{
    public:
    int var_base ;
    void display(){
        cout << "Displaying the content of base class variable var_base " << var_base << endl; 
    }
};
class derived : public Base_class{
     public:
    int var_derived  ;
    void display(){
        cout << "Displaying the content of derived class variable var_derived " << var_derived << endl; 
        cout << "Displaying the content of derived class variable var_base " << var_base << endl; 
    }
};
int main(){

    Base_class * BaseClassPointer ;
    Base_class obj_base ;
   // * BaseClassPointer = & derived ;
   derived obj_derived;
   BaseClassPointer = &obj_derived;
   BaseClassPointer->var_base = 35;
   BaseClassPointer->display();
   //BaseClassPointer.var_derived = 34; // we can only acces the vlaue of base class object
   derived * derived_Class_Pointer ;
   derived_Class_Pointer = & obj_derived;
   derived_Class_Pointer->var_derived = 12;
   derived_Class_Pointer->display() ;


return 0 ; 
}
