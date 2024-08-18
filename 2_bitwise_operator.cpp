#include <iostream>

using namespace std;

int main()
{
    unsigned int a,b,c ;

    cout << "Enter A,B" << endl;
    cin >> a >> b ;

    c=a&b;
    cout << c << endl;

    c=a | b;
    cout << c << endl;

    c = ~a;
    cout << c << endl;

    c=a << b;
    cout << c << endl;

    c=a >> b;
    cout << c << endl;




}