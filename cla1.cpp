#include<iostream>
using namespace std;
class student
{
private:
char name[50];
int roll;
float marks;
public:
void getdata()
{
cout <<"enter the name"<<endl;
cin>>name;
cout <<"enter the roll"<<endl;
cin>>roll;
cout <<"enter the marks"<<endl;
cin>>marks;
}
void display_data()
{
cout <<"enter the name"<<endl;
cout<<name<<endl;
cout <<"enter the roll"<<endl;
cout<<roll<<endl;
cout <<"enter the marks"<<endl;
cout<<marks<<endl;
}
};
int main()
{
student s[5];
int i;
for(i=0;i<=4;i++)
{
s[i].getdata();
s[i].display_data();
}
return 0;
}

