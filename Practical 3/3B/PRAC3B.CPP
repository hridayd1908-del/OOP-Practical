#include<iostream.h>
#include<conio.h>
class compare {
private:
   int a, b;
public:
   compare(intx, int y) {
	a=x;
	b=y;
   }
   freind int findmax(compare obj);
};
int findmax(compare obj)  {
   if (obj.a>obj.b)
	return obj.a;
   else
	return obj.b;
   }
   void main()  {
   clrscr();
     int x,y;
     cout<<"Enter two numbers: ";
     cin>>x>>y;
     compare obj(x,y);
     cout<<"Maximum value is:"<<findmax (obj)<<endl;
     getch();
   }