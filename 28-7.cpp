#include<iostream>
using namespace std;

class Integer
{
private:
    int n1;
    int n2;

public:
    Integer () { n1=0; n2=0; }

    Integer (int a, int b){  n1=a; n2=b; }

    void show_integers()
    {
        cout<<"number 1 : "<<n1<<endl;
        cout<<"number 2 : "<<n2<<endl;
    }

    void operator ! ()
    {
        n1=(-n1);
        n2=(-n2);
    }

};
int main ()
{
    class Integer I1(5,6) ;

    I1.show_integers();

    !I1;
    I1.show_integers();

    return 0;


}
