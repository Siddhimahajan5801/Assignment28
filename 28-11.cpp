#include<iostream>
using namespace std;

class Marks
{
private:
    int marks;

public:
    void set_marks (int m) {  marks=m; }

    void print_marks (){  cout<<"Marks  =  "<<marks<<endl;  }

    Marks * operator -> () {  return this; }

};
int main ()
{
    class Marks m1, m2;

    m1->set_marks(55);
    m1->print_marks();

    m2->set_marks(72);
    m2->print_marks();

    return 0;
}
