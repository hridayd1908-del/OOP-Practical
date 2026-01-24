#include<iostream.h>
#include<conio.h>
class counter
	{
		private:
		static int count;
		public:
		counter()  {
		count++;
     }
  static int getcount()
     {
       return count;
     }
    };
  int counter::count = 0;
  void main()
    {
      clrscr();
       counter obj1;
       counter obj2;
       counter obj3;
       cout<<"Number of objects created: "<<counter::getcount()<<endl;
     getch();
   }