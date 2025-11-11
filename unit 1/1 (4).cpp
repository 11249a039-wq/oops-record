#include<iostream>
using namespace std;
class Account {
public:
    int accNo;
    string name;
    float balance;
    void display() {
    cout<<"Account No:"<<accNo
    <<",Name:"<<name
    <<",balance:"<<balance<<endl;
 }
};
int main()
{
    Account a,b;
    a.accNo=1001;
    a.name="Ramesh";
    a.balance=25000.50;
    b.name="sita";
    b.balance=40000.75;
    a.display();
    b.display();
    return 0;
}
