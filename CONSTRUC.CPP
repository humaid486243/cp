#include<iostream.h>
#include<conio.h>
class student
{

   public:
   int y;
   int x;
   student()
   {
      cout<<"\ndefault constructor execute";


   }
   student(int a,int b)
   {  cout<<"\nparameterised constructor execute";
      x=a;
      y=b;


   }
   student(student &m)
   {
       cout<<"\n copy constuctor execute";
       cout<<"\nvalue of x : "<<m.x;
       cout<<"\nvalue of y : "<<m.y;

   }

};
void main()
{ clrscr();
  student ob1,ob2(2,4),ob3(ob2);

  getch();
}


