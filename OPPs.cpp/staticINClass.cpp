#include<bits/stdc++.h>
using namespace std;
class student{
    static int count ;
    int id ;

    public:

    void setid();
    void getid() ;

    static void getcount(void);
      //  cout << id << endl ; static function can only access the static member of the function 
};

int student :: count = 0 ;

void student :: setid(){
    cout << "Enter the id of the person " << count+1 << endl ;
    cin >> id;
    count++;
}

void student :: getid(){
    cout << "The noof the Student is" << count+1 << " and id is " << id << endl ;

}

void student :: getcount(){
    cout << "The count is " <<count  <<endl ;
}
int main(){
    student a ;
    a.setid() ;
    a.getid() ;
    student::getcount();
    student b ;
    b.setid() ;
    b.getid() ;
    student::getcount() ;

return 0 ; 
}