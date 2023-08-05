#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a , b ;
    public:
    void add(int n , int m){
        a = n ;
        b = m ;
    }
    void printdata(){
        cout << "Your complex no are  " <<  a  << "+" << b << "i" << endl ;
     }

    friend Complex sumcomplex (Complex o1 , Complex o2);

};

Complex sumcomplex(Complex o1 , Complex o2){
    Complex o3 ;
    o3.add((o1.a+o2.a), (o1.b + o2.b)); // this is not declare in class and accesing the private member of class so class need to
    //declare it as frind ;
    return o3 ;
}

int main(){
    Complex c1 ;
    c1.add(4,2);
    c1.printdata() ;
    Complex c2 ;
    c2.add(5,2);
    c2.printdata() ;
    Complex sum ;
    sum = sumcomplex(c1 , c2);
    sum.printdata() ;
    


return 0 ; 
}