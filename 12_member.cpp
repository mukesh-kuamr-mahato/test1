#include<iostream>

using namespace std;

class box
{
    public:
    double length;
    double breadth;
    double height; 

    double volume(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

double box::volume(void) 
{
    return length*breadth*height;
}

void box::setLength(double len)
{
    length = len;
}

void box::setBreadth(double bre)
{
    breadth = bre;
}

void box::setHeight(double hei)
{
    height = hei;
}


int main()
{
    box b1;
    box b2;
    double vol1, vol2;

    b1.setLength(10.0);
    b1.setBreadth(10.0);
    b1.setHeight(10.0);

    vol1 = b1.volume();

    b2.setLength(2.0);
    b2.setBreadth(2.0);
    b2.setHeight(20.0);

    vol1 = b2.volume();

    cout << "Volume of b1: " << vol1 << endl;
    cout << "Volume of b2: " << vol2 << endl;






}