//Write a C++ program to overload new and delete operator
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class demo
{
	public:
	int x;
	void *operator new(size_t size)
	{
		cout<<"Custom new called\n";
		return malloc(size);
	}
	void operator delete(void *x)
	{
		cout<<"Custom delete called\n";
		free(x);
	}
};
void main()
{
	clrscr();
	demo *d = new demo;
	d->x = 10;
	cout<<"Value: "<<d->x<<endl;
	delete d;
	getch();
}