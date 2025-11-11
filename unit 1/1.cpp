#include<iostream>
using namespace std;
class laptop{
public:
  string brand;
  string processor;
  int ram;
  void display()
  {
    cout<<"Brand:"<<brand
    <<",Processor:"<<processor
    <<",RAM:"<<ram<<"GB"<<endl;
  }
};
int main()
{
    laptop a,b;
    a.brand="Dell";
    a.processor="Intel i5";
    a.ram=8;
    b.brand="HP";
    b.processor="AMD Ryzen5";
    b.ram=16;
    a.display();
    b.display();
    return 0;
}