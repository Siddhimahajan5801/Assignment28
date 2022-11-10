#include <iostream>
using namespace std;

class Complex{
    private:
    int a,b;

    public:
        friend ostream& operator << (ostream &out, Complex &c);

        friend istream& operator >> (istream &in, Complex &c);

};
istream& operator >> (istream &in, Complex &c)
{
    cout<<"Enter real part :  "<<endl;
    cin>>c.a;
    cout<<"Enter imaginary part :  "<<endl;
    cin>>c.b;

    return in;
}

ostream& operator << (ostream &out, Complex c)
{
    cout<<"The complex number is: "<<c.a<<"+"<<c.b<<"i\n";

    return out;
}

int main(){
   class Complex C1,C2;

    cout<<"Enter two complex numbers : "<<endl;
    cin>>C1>>C2;

    cout<<endl;
    cout<<C1<<C2;

    return 0;
}
