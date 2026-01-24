//Write a C++program to access class members using  a pointer to object members
#include<iostream.h>
#include<conio.h>
class student
{
	int roll;
	float marks;
	public:
		void getdata()
		{
			cout<<"Enter the roll no. and marks: ";
			cin>>roll>>marks;
		}
		void putdata()
		{
			cout<<"Roll Number: "<<roll<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
};
void main()
{
	clrscr();
	student s;
	student *ptr;
	ptr = &s;
	ptr->getdata();
	ptr->putdata();
	getch();
}
