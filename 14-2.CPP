#include<iostream.h>
#include<conio.h>
class base
{
public:
virtual void print()
{
cout<<"base class function"<<endl;
}
};
class derived:public base
{
public:
void  print()
{
cout<<"derived class function"<<endl;
}
};
int main()
{
clrscr();
derived derived1;
base *b=& derived1;
b->print();
getch ();
return 0;
}

