#include<bits/stdc++.h>
using namespace std;
// creating a class
class student{
    string name ;
    public:
    int age ;
    char gender ;

    // we can make constrcutor  to instillaize the object a start 

    //default Constructor 
    student(){
        cout << "defaultConstrucotr" << endl ;
    }

    student(string s , int n , char g){
        cout << "Paramerterized Constructor" << endl ;
        name = s ;
        age = n;
        gender = g ;
    }

    student(student &b){
        cout << "Copy Constructor" << endl ;
        name = b.name ;
        age = b.age ;
        gender = b.gender ;

    }


    ~student(){
        cout << "Destructor Called" << endl ;
    }

    // Setter is used to set the data which is in private mode ;
    void setname(string s);

    void printinfo(){
        cout << "Name = " << name << endl  ;
        cout << "Gender = " << gender << endl ;
        cout << "Age =" << age << endl ;    
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
            return false;
    }

};

void student :: setname(string s){
    name = s ;
}


int main(){
    // student arr[3] ;
    // // a.name = "Garvit" ;
    // // a.age = 23 ;
    // // a.gender = 'M' ;

    // // cout << a.name << " " << a.gender << " " << a.age;g
    // // // Now if we want to print multiple naems then we can create an arr of objet 

    // for(int i = 0 ; i < 3 ; i++){
    //     string s ;
    //     cout << "Name = " << endl ;
    //   //  cin >> arr[i].name ;
    //   cin >> s ;
    //   arr[i].setname(s) ;// calling the function to set the NAEMGarvit

    //     cout << "Age =" << endl ;
    //     cin >> arr[i].age ;
    //     cout << "Gender = "  << endl ;
    //     cin >> arr[i].gender ;
    // }

    // for(int i = 0 ; i < 3 ; i++){
    //     arr[i].printinfo() ;
    // }

    // student a("garvit" , 18 , 'm');
    // a.printinfo() ;

    student a ;
    student b("Hydra" , 12 , 'M');
    student c = b;

    //the concept of operator overloading
    if(c == b){
        cout << "Same" << endl ;
    }
    else{
        cout << "Not Same" << endl ;
    }


return 0 ; 
}

