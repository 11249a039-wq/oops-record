#include<iostream>
using namespace std;
class complex
{
    int real, image;
    public:
    complex(int r=0, int i=0)
    {
        real = r; image = i;
    }
complex add complex()
{
    complex temp;
    temp.real = real+c.real;
    temp.imag = image+c.imag;
    return temp;
}
void display()
{
    cout<<real<<"+"<<image<<"i"<<endl;
}
};
int main()
{
    complex c1(2,3), c2(4,5),c3;
    c3=c1.add(c2);
    cout<<"result:";
    c3.display();
    return 0;
}