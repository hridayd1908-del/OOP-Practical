#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	//Volume of Cube
	double side, vc;
	cout<<"Enter side of cube: ";
	cin>>side;
	vc =side*side*side;
	cout<<"Volume of cube is "<<vc<<endl;

	//Volume of Rectangle Box
	double l,b,h, vr;
	cout<<"\nEnter Length, breadth and height of Rectangle: ";
	cin>>l>>b>>h;
	vr = l*b*h;
	cout<<"Volume of Rectangle is: "<<vr<<endl;

	//Volume of Cone
	float const pi = 3.14;
	float r, he, result;
	cout<<"Enter Radius & Height: ";
	cin>>r>>he;
	result=(1.0/3.0)*pi*r*r*he;
	cout<<"Volue of Cone is " <<result<<endl;

	getch();
}