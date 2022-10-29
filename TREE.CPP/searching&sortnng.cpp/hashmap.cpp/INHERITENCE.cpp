// INHERITENCE
#include<iostream>
using namespace std ;

class Veichle{
    public:
    int cost ;
    int id ;

    int set_cost(int cost){
       this->cost = cost ;
    }
    
};

// INHERITING A NEW CLASS
class car : public Veichle{
    public:
    int numgear ;
    void print(){
        cout << "THE COST " << cost << endl ;
        cout << "ID" << id << endl ;
        cout << "NUMGEAR" << numgear << endl ;
    }
      
    
};

int main(){
    Veichle v ;
    v.cost = 1000 ;
    v.id = 21;


    car c ;
    c.numgear = 5 ;
    c.print();
}