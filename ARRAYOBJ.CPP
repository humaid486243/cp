#include<iostream.h>
#include<conio.h>
class student
{
	char name[30];
	int id;
	float marks;
	public:
		void getdata()
		{
		cout<<"\nEnter student name:- ";
		cin>>name;
		cout<<"\nEnter student id number:- ";
		cin>>id;
		cout<<"\nEnter student marks:- ";
		cin>>marks;
		}
		void disp()
		{
		cout<<"\nStudent name:- "<<name;
		cout<<"\nStudent id number:- "<<id;
		cout<<"\nStudent marks:- "<<marks;
		}
};
void main()
{
	student s[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		s[i].getdata();
	}
	for(i=0;i<3;i++)
	{
		s[i].disp();
		cout<<"\n";
	}
       getch();
}