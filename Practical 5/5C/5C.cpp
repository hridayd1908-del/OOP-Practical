//Write a C++ program to demonstrate multilevel inheritance.
#include<iostream.h>
#include<conio.h>
class personal
{
	protected:
		int age;
		char name[20];
	public:
		void getpersonal()
		{
			cout<<"Enter name and age: ";
			cin>>name>>age;
		}
		void putpersonal()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class employee: public personal
{
	protected:
		int emp_id;
	public:
		void getemployee()
		{
			cout<<"Enter Employee ID: ";
			cin>>emp_id;
		}
		void putemployee()
		{
			putpersonal();
			cout<<"Empolyee ID: "<<emp_id<<endl;
		}
};
class manager: public employee
{
	private:
		float salary;
	public:
		void getmanager()
		{
			cout<<"Enter salary: ";
			cin>>salary;
		}
		void putmanager()
		{
			putemployee();
			cout<<"Employee Salary: "<<salary<<endl;
		}
};
void main()
{
	clrscr();
	manager m;
	m.getpersonal();
	m.getemployee();
	m.getmanager();
	m.putmanager();
	getch();
}
