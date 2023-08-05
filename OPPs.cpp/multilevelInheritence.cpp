#include<bits/stdc++.h>
using namespace std;

class student{
    protected :
    int rool_number ;
    public:
    void set_roll_number(int );
    void get_roll_number();

};

void student :: set_roll_number(int r){
    rool_number = r ;
}
void student :: get_roll_number(){
    cout << "Your roll no is " << rool_number << endl ;
}

class marks : public student {
    protected:
    float physics ;
    float maths ;
    public:
    void set_marks(float ,float );
    void get_marks();
};
void marks :: set_marks(float x ,float y){
    physics = x ;
    maths = y ;
}
void marks :: get_marks(){
    cout << "Marks in physics are " << physics << endl;
    cout << "Marks in Maths are " << maths << endl;
}

class result : public marks{
    public:
    void showresult() ;
};

void result :: showresult(){
    get_roll_number() ;
    get_marks() ;
    cout << "You Have Obtained " << (physics + maths)/2 << "%" << endl ;
}

int main(){
    result rr ;
    rr.set_roll_number(23);
    rr.set_marks(70.0 , 90.0);
    rr.showresult() ;

return 0 ; 
}