#include<bits/stdc++.h>
using namespace std;
class employee{
    public:
      int id ;
    int sal;
    employee(){};
    employee(int inpid){
        id = inpid ;
        sal = 233 ;
    }
    void printdata(){
        cout << "Employeeid is " << id << " and salary "<<sal << endl ; 
      }

};

/*
Using Inheritence for Inheriting the propoerty of base class ;
1->We can dervie a class {{class} , {new_className } : {AccessSpecifier} , {NameofBaseClass}};
2->By default in cpp the visibility mode is private in cpp
3->using visibility mode as private will make all the public member of base class inherited as private;
4->using visibility mode as public will make all the public member of base class inherited as public;
*/


// Inheriting the class

class Manager :public employee{ // by default it is private
public:
    Manager(){};
    Manager(int nid){
        id = nid ;
        sal = 10;
    }
};
int main(){
    employee e1(1);
    e1.printdata() ;
    employee e2(2);
    e2.printdata();
    Manager m1(4);
    m1.printdata();
return 0 ; 
}