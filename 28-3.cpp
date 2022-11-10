#include<iostream>
using namespace std;

class array
{
private:
    int a[100];
    const int size = 100;

public:
    void operator [](int index)
    {
        if (index>size)
            cout<<"Array index out of bound exception "<<endl;

        else
            cout<<"Valid Array index"<<endl;
    }
};

int main ()
{
    class array a1, a2;

    a1[120];

    cout<<endl;
    a2[55];
}
