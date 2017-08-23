// (c)  Roland Ihasz - https://github.com/lnrsoft

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle {
public:
    virtual void triangle()
    {
        cout<<"I am a triangle\n";
    }
};

class Isosceles : public Triangle {
public:
    virtual void isosceles()
    {
        cout<<"I am an isosceles triangle\n";
    }
    void description()
    {
        cout<<"In an isosceles triangle two sides are equal\n";
    }
};

int main()
{
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}
