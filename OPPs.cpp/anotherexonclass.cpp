#include <bits/stdc++.h>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin();

public:
    void read();
    //  void chk_bin() ;
    void ones_complement();
    void printBinary();
};

void binary ::read()
{
    cout << "Enter the String" << endl;
    cin >> s;
    chk_bin(); // this is called nesting
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary Number" << endl;
            exit(0);
            break;
        }
    }
}
void binary ::ones_complement()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}
void binary ::printBinary()
{
    cout << "The number is " << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary a;
    a.read();
    //  a.chk_bin() ; // we can pass this in a read option so that it will check the number this improve the integrity
    a.printBinary();
    a.ones_complement();
    a.printBinary();

    return 0;
}