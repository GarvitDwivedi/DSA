#include<bits/stdc++.h>
using namespace std;

class marks{
    int physics , maths ;
    public:
    marks & setData(int physics , int maths){
        this->physics = physics ;
        this->maths = maths ;
        // physics = physics ; // so here the concept of this pointer comes;
        // maths = maths ;
        return *this ;
    }
    void getData(){
        cout << "The Marks in physics and Maths are " << physics << " and " <<maths << endl ;  
        //  physics = physics ; the issue is that the compiler does not identifiy local vs global 
        // maths = maths ; so the compiler will give priority to Local variable 
    }
};

// the other use of the this pointer is to return the object from the method 
int main(){
    marks m ;
    m.setData(43 , 23).getData();
    m.getData();
return 0 ; 
}