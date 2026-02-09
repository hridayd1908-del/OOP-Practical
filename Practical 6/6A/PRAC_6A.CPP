//Write a c++ program to illustrate the use of virtual function
#include<iostream.h>
#include<conio.h>
class A
{
   public:
     virtual void display()
     {
       cout<<"Display from class A";
       }};
     class B:public A
       {
       public:
	  void display()
	  {

	     cout<<"Display from class B";
	  }};

void main()
{
  clrscr();
  A*ptr;
  B obj;
  ptr= &obj;
  ptr->display();
  getch();
}