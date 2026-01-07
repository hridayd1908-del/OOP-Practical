#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,n;
	cout<<"Enter a number: ";
	cin>>n;
	for(j=1;j<=n;j++)
	{
	  for(i=2;i<=j/2;i++)
	  {
	   if(j%i==0)
	   break;
	   }


	if(i>j/2)
	cout<<j;
	}
   getch();
}
