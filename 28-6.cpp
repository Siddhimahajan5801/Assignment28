#include <iostream>
using namespace std;

class Complex{
    private:
    int a,b;

    public:
Complex (int x,int y ){ a=x; b=y; }

Complex (){ a=0; b=0;  }

void showData(){ cout<<"The complex number is: "<<a<<"+"<<b<<"i\n"; }

Complex & operator =(Complex &c){
    cout<<endl<<"Assignment operator called"<<endl;
     a= c.a;
     b= c.b;
     return c;
  }
};

int main(){
   class Complex C1(9,6),C2(6,3),C3,C4,C5;

    C1.showData();
    C2.showData();

    C5 = C1;
    C5.showData();


    C3 = C4 = C2;
    cout<<endl;
    C3.showData();
    C4.showData();


    return 0;
}
