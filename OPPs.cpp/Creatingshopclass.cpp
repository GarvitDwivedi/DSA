#include<bits/stdc++.h>
using namespace std;

class shop{
    private:
    int itemid[100] ;
    int itemprice[100];
    int counter = 0 ;

    public:
    void setcounter() ;
    void setitem() ;
    void display( );
};

void shop :: setcounter(){
    counter = 0 ;
}

void shop :: setitem(){
    cout << "Enter the Item id " << counter+1 <<endl ;
    cin >> itemid[counter];
    cout << "Enter the Itemprice " << counter+1 << endl ;
    cin >> itemprice[counter];
    counter++;  
}

void shop :: display(){
    for(int i = 0 ; i < counter ; i++){
        cout << "The item id is " << itemid[i] << " and price " << itemprice[i] << endl ;
    }
}
int main(){

    shop dukaan ;
    dukaan.setcounter() ;
    dukaan.setitem() ;
    dukaan.setitem() ;
    dukaan.setitem() ;
    dukaan.display() ;

return 0 ; 
}