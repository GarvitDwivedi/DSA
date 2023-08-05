#include<bits/stdc++.h>
using namespace std;

class student{
    int roolno ;
    string name  ;

    public:
    void setname( ){
        cout << "Enter the id " << endl ;
        int r;cin >> r ;
        cout << "Enter the name" << endl ;
        string n ;cin >> n ;

        roolno = r ;
        name = n ;     
    }

    void printdata(){
        cout << "The name of the student with roolno" << roolno << " is "<< name ;
    }

};

int main(){

    student arr[3];
    for(int i = 0 ; i < 3 ; i++){
        arr[i].setname();
        arr[i].printdata() ;
    }
return 0 ; 
}