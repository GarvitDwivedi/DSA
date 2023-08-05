#include<bits/stdc++.h>
using namespace std;

// virtual base class is used to inherit a class which is been inherited by multiple classes ans delow class is 
// using that class 
// a - b ;
// a - c ;
// d - b ;
// d - c ; multiple class inherited then this may coause an error 

class student{
    int roll_no ;
    public:
    void set_roll_no(int r){
        roll_no = r ;
    }
    void getroll_number(){
        cout << "The roll no of the Student is " << roll_no<< endl ;
    }
};

class marks : virtual public student{
    protected:
    float physics ;
    float maths ;
    public:
    void setmarks(float a , float b){
        physics = a ;
        maths = b ;
    }    
    void getmarks(){
        cout << "The marks in Physics are " << physics << endl ;
        cout << "The marks in Maths are " << maths << endl ;
    }
};

class score : virtual public student{
    protected:
    int socre ;
    public:
    void setScore(int a){
        socre = a ;
    }
    void get_socre(){
        cout << "The socre in PT is " << socre <<endl;
    }
};

class total : public  score , public  marks {
    protected :
    float total ;
    public:
    void getdetail(){
        getroll_number() ;
        getmarks();
        get_socre() ;
        total = physics + maths + socre ;
        cout << "The Total marks are " << total << endl ;
    }
};





int main(){
    
    total t ;
    t.set_roll_no(26);
    t.setmarks(68.8 , 90.7);
    t.setScore(9);
    t.getdetail() ;
return 0 ; 
}