#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance (){ feet=0; inches=0; }

    Distance (int f, int i ){ feet=f; inches=i; }

    void display_data()
    {
        cout<<"Feet = "<<feet<<"    Inches = "<<inches<<endl<<endl;
    }

    void operator ()(int a, int b, int c)
    {
        cout<<"() operator called! "<<endl;
        feet=a+c+5;
        inches=a+b+15;
    }
};

int main ()
{
    class Distance d1(4,5), d2;

    d1.display_data();

    d1(4,5,6);
    d1.display_data();

   return 0;
}
