#include<iostream.h>
#include<conio.h>
class student
{
     private:
	int rollno;
	 char sname[12];
     public:
	 void accept()
	 {
	      cout<<"Enter Roll no: ";
	      cin>>rollno;
	      cout<<"Enter Name of Student: ";
	      cin>>sname;
	 }
	 void display()
	 {
		cout<<"Roll no of Student is: "<<rollno<<endl;
		cout<<"Name of the Student is: "<<sname;
	 }
    };
    main()
    {
    clrscr();
    student stu;
    stu.accept();
    stu.display();
     getch();
}