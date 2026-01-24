//Write a C++ program that allocates memory dynamically using a constructor.
#include<iostream.h>
#include<conio.h>
class demo
{
	int *p;
	public:
	demo()
	{
		p=new int;
		*p = 100;
	}
	void show()
	{
		cout<<"Value: "<<*p;
	}
	~demo()
	{
		delete p;
	}
};
void main()
{
	clrscr();
	demo d;
	d.show();
	getch();
}