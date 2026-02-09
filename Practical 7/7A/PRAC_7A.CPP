//Write a C++ program to create a simple calculator using class templates.
#include<iostream.h>
#include<conio.h>
template <class T>
class calc
{
 T a, b;
public:
  void get()
  {
    cout<<"Enter two numbers: ";
    cin>>a>>b;
  }
  void result()
  {
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"multiplication: "<<a*b<<endl;
    cout<<"division: "<<a/b<<endl;
  }
};
void main()
{
 clrscr();
 calc<int>c1;
 c1.get();
 c1.result();
 calc<float>c2;
 c2.get();
 c2.result();
 getch();
 }
