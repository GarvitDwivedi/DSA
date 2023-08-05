#include<bits/stdc++.h>
using namespace std;
class point{
    int x , y ;
    friend double calDistance(point , point );
    public:
    point(int a , int b){
        x = a ;
        y = b ;
    }
    void getpoint(){
        cout << "The Points are (" << x << " , " << y << ")" << endl ; 
    }

};

double calDistance(point p1 , point p2){
    int x1 = (p1.x - p2.x);
    int y1 = (p1.y - p2.y);

     x1 = x1 * x1 ;
     y1 = y1 * y1 ;

    return sqrt(x1+y1);

}
int main(){
    point p(1,0);
    p.getpoint() ;
    point q(70,0);
    q.getpoint() ;
    double res = calDistance(p , q);
    cout << "The distance b/w to number is " << res << " Units " << endl ;
return 0 ; 
}