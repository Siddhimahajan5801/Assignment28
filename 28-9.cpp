#include <iostream>
using namespace std;

class Integer
{
    int x;

public:
    void set_x(int a){   x=a; }

    void display(){  cout<<"x = "<<x<<endl; }

    operator int() {  return x; }
};

int main()
{
    Integer i1;
    i1.set_x(6);

    int k;

    k=(int)i1;
    i1.display();

    return 0;
}
