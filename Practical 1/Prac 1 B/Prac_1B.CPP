 #include<iostream.h>
 #include<conio.h>
 void main()
 {
	clrscr ();
	int sec,min,hrs;
	cout<<"Enter time in seconds: ";
	cin>>sec;
	hrs = sec/3600;
	min = sec/60;
	cout<<"Hours: "<<hrs<<endl;
	cout<<"Minutes: "<<min<endl;
	getch();
 }