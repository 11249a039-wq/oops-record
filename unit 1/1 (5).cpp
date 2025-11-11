#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollNo;
    float marks;
    void display()
    {
        cout<<"Name:"<<name
        <<",Roll No:"<<rollNo
        <<",Marks:"<<marks<<endl;
    }
};
int main()
{
    student a,b,c;
    a.name="Raj";
    a.rollNo=101;
    a.marks=85.5;
    b.name="Divy";
    b.rollNo=103;
    b.marks=78.2;
    c.name="kumar";
    c.rollNo=103;
    c.marks=78.2;
    a.display();
    b.display();
    c.display();
    return 0;
}

    
