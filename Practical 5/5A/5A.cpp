//Write a C++ program to demonstrate single inheritance.
#include<iostream.h>
#include<conio.h>
class person
{
	protected:
		char name[20];
		int age;
	public:
		void getperson()
		{
			cout<<"Enter name and age: ";
			cin>>name>>age;
		}
		void putperson()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class student: public person
{
	private:
		int rollno;
	public:
		void getstudent()
		{
			cout<<"Enter roll number: ";
			cin>>rollno;
		}
		void putstudent()
		{
			putperson();
			cout<<"Roll Number: "<<rollno;
		}

};
void main()
{
	clrscr();
	student s;
	s.getperson();
	s.getstudent();
	s.putstudent();
	getch();
}
