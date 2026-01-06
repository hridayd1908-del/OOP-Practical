#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter Three Numbers: ";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
	   cout<<"Greatest Number is: "  <<a;
	}
		else if(b>a&& b>c)
		{
			cout <<"Greatest Number is: " <<b;
		}
		else
		{
			cout<<"Greatest Number is: " <<c;
		}
		getch();

}