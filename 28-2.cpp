#include <iostream>
using namespace std;

class Complex{
    private:
    int a,b;

    public:
void setData(int a,int b ) { this->a=a; this->b=b; }

void showData(){ cout<<"The complex number is: "<<a<<"+"<<b<<"i\n"; }

};
int main ()
{
    class Complex C1,C2;

    C1.setData(9,6);
    C1.showData();

    C2.setData(6,3);
    C2.showData();

    return 0;
}
