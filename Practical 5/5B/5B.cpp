//Write a C++ program to demonstrate multiple inheritance.
#include<iostream.h>
#include<conio.h>
class academic
{
	protected:
		int marks;
	public:
		void getmarks()
		{
			cout<<"Enter academic marks: ";
			cin>>marks;
		}
};
class sports
{
	protected:
		int score;
	public:
		void getscore()
		{
			cout<<"Enter sports score: ";
			cin>>score;
		}
};
class result: public academic, public sports
{
	private:
		int total;
	public:
		void display()
		{
			total = marks + score;
			cout<<"Academic marks: "<<marks<<endl;
			cout<<"Sports marks: "<<score<<endl;
			cout<<"Total score: "<<total<<endl;
		}
};
void main()
{
	clrscr();
	result r;
	r.getmarks();
	r.getscore();
	r.display();
	getch();
}
