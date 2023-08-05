#include<bits/stdc++.h>
using namespace std;

class Student{
    int rollno ;
    string name ;
    public:
    void setData(int r, string s){
        rollno = r ;
        name = s ;
    }
    void getData(){
        cout << "The name of the student is " << name << endl;
        cout << "The Rollno of the student is " << rollno << endl;
    }
};


int main(){

    Student *ptr = new  Student[3];
    Student *ptrtemp = ptr ;
    int r ;
    string s ;

    for(int i = 0 ; i < 3 ; i++){
        cout << "Enter the Rollno and Name " << endl ;
        cin >> r >> s ;
        ptr->setData(r , s);
        ptr++;
    }
    for(int i =0  ; i < 3 ; i++){
        ptrtemp->getData() ;
        ptrtemp++;

    }

 return 0 ; 
}