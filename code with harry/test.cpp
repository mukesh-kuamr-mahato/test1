#include<iostream>
using namespace std;

int & swap(int &x, int &y);

int main()
{
    int i,a,b;
    cin >>a >> b ;

    cout <<"before swap"<< a << " " << b << endl;
    swap(a,b) = 39;
    cout <<"after swap"<< a << " " << b << endl;
    return 0;
}

int & swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return x;
}