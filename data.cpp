#include <iostream>
using namespace std;

struct student
{
char sname[30];
int roll_no;
int emarks;
int mmarks;
int bmarks;
};

int main()
{int i,n;
cout<<:"enter no of students"<<endl;
cin>>n;
struct student s[n];
for(i=0;i<n;i++)
{
cout<<"enter the student name"<<endl;
cin>>s[i].sname;
cout<<"enter the roll no"<<endl;
cin>>s[i].roll_no;
cout<<"enter the emarks"<<endl;
cin>>s[i].emarks;
cout<<"enter the mmarks"<<endl;
cin>>s[i].mmarks;
cout<<"enter the bmarks"<<endl;
cin>>s[i].bmarks;
}
for(i=0;i<n;i++)
{
cout<<"the name:\n"<<s[i].sname<<endl;
cout<<"the roll no:\n"<<s[i].roll_no<<endl;
cout<<"the marks:\n"<<s[i].emarks<<endl;
cout<<"the marks:\n"<<s[i].mmarks<<endl;
cout<<"the marks:\n"<<s[i].bmarks<<endl;
}
return 0;

}

