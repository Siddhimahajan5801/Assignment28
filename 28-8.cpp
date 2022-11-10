#include <iostream>
using namespace std;

class Coordinate
{
private:
    int x;
    int y;
    int z;
public:
     Coordinate (){ x=0; y=0; z=0; }

     Coordinate (int a, int b, int c){ x=a; y=b; z=c; }

     void display_data(){ cout<<"x = "<<x<<"   y = "<<y<<"   z = "<<z<<endl; }

     Coordinate operator , (Coordinate c)
     {
         Coordinate temp;
         temp.x = c.x;
         temp.y = c.y;
         temp.z = c.z;
         return temp;
     }


};
int main ()
{
    class Coordinate c1(4,5,6), c2(7,8,9), c3;

    cout<<"For object c1 : "<<endl;
    c1.display_data();

    cout<<endl<<"For object c2 : "<<endl;
    c2.display_data();

    cout<<endl<<"c3=(c1,c2) : "<<endl;
    c3=(c1 , c2);
    c3.display_data();

    return 0;
}
