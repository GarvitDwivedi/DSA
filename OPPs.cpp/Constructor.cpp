#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void); // Constructer Declaration

    void printvalue()
    {
        cout << "The value of the ComplexNo is " << a << " + " << b << "i";
    }
};

Complex ::Complex(void)
{
    a = 10;
    b = 13;
}

int main()
{
    Complex c1;
    c1.printvalue();
    return 0;
}

/*CharacterSticks of Constructor --->>
1.Constructor are defined for the initiallization of object
2.Comstructor have same name as class
3.Constructor are automatically invoked when a object is Created ;
4.Constructor have no return type ex-- Comlpex( )
5.There are 3 type of Constructor
  1-default
  2-Parametrized
  3-copy Construcotr
*/