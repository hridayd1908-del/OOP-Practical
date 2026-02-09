//Write a C++ Program to use this pointer to find the eldest person from a group.
#include<iostream.h>
#include<conio.h>
class person
{
 int age;
public:
   void getage()
   {
     cout <<"Enter Age: ";
     cin>>age;
   }
   person elder(person p)
   {
      if (this->age>p.age)
      return *this;
      else
	return p;
      }
      void show()
      {
	cout<<"Eldest Age is: "<<age;
      }
   };
   void main()
   {
     clrscr();
     person p1, p2, p3,eldest;
     cout<<"Person 1 \n";
     p1.getage();
     cout<<"Person 2\n";
     p2.getage();
     cout<<"Person 3\n";
     p3.getage();
      eldest = p1.elder(p2);
      eldest = eldest.elder(p3);
      eldest.show();
      getch();
     }

