//Write a C++ program to represent complex numbers and perform operations using operator overloading
#include<iostream.h>
#include<conio.h>
class complex
{
	int r,i;
	public:
	void getdata()
	{
		cout<<"Enter real and imaginary part: ";
		cin>>r>>i;
	}
	void putdata()
	{
		cout<<r<<"+"<<i<<"i"<<endl;
	}
	complex operator+(complex b)
	{
		complex c;
		c.r = r+b.r;
		c.i = i+b.i;
		return c;
	}
	complex operator-(complex b)
	{
		complex d;
		d.r = r-b.r;
		d.i = i-b.i;
		return d;
	}
};
int main()
{
	clrscr();
	complex a,b,c,d;
	a.getdata();
	b.getdata();
	c = a+b;
	d = a-b;
	cout<<"First Complex Number: ";
	a.putdata();
	cout<<"Second Complex Number: ";
	b.putdata();
	cout<<"Addtion Result: ";
	c.putdata();
	cout<<"Subtraction Result: ";
	d.putdata();
	getch();
	return 0;
}