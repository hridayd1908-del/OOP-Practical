#include<iostream.h>
#include<conio.h>
void main ()
{
	int n, odd = 0, even= 0;
	clrscr();
	cout<<"Enter the n natural number: ";
	cin>>n;
	for(int i=1; i<=n;i++)
	{
	   if (i%2==0)
	   {
		 even = even+i;
	   }
	   else {
	   odd=odd=i;
	   }
	}
	cout<<"Sum of n Natural even No. is: "<<even<<endl;
	cout<<"Sum of n Natural odd No. is: "<<odd<<endl;
   getch();
}