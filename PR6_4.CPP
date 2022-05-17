#include<iostream.h>
#include<conio.h>
class student
{
private:
int en;
char name[20];
char co[20];
int m,s,c;
public:
void getdata()
{
cout<<"Enter Enrollment no:";
cin>>en;
cout<<"Enter Name:";
cin>>name;
cout<<"Enter Course:";
cin>>co;
cout<<"Enter Maths marks:";
cin>>m;
cout<<"Enter physics marks:";
cin>>s;
cout<<"Enter C:";
cin>>c;
}
void put()
{
cout<<"Enrollment no:"<<en<<endl;
cout<<"Student Name:"<<name<<endl;
cout<<"Student Course:"<<co<<endl;
}
void sum()
{
int total=m+s+c;
cout<<"Total Marks:"<<total<<endl;
}
};
int main()
{
student s[50];
int n,i;
clrscr();
cout<<"Enter no of student:";
cin>>n;


for(i=0;i<n;i++)
{
s[i].getdata();
}
for(i=0;i<=n;i++)
{
s[i].put();
s[i].sum();
}
getch();
return 0;
}