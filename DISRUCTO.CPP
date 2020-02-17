#include<iostream.h>
#include<conio.h>
class s
{ public:
  s()
  {
     cout<<"this is constuctor ";
  }
  ~s()
  {
    cout<<"this is distuctor";

  }




};
void main()
{
  clrscr();
  s s1;
  cout<<"\nthis is main";
  getch();



}