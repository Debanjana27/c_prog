#include<iostream>
using namespace std;

struct employee
{
char ename[30];
int id;
int salary;
char dept[30];
};

int main()
{
struct employee e;
cout<<"enter the employee name"<<endl;
cin>>e.ename;
cout<<"enter the employee id"<<endl;
cin>>e.id;
cout<<"enter the employee salary"<<endl;
cin>>e.salary;
cout<<"enter the employee department"<<endl;
cin>>e.dept;
cout<<"the name:\n"<<e.ename<<endl;
cout<<"the id:\n"<<e.id<<endl;
cout<<"the salary:\n"<<e.salary<<endl;
cout<<"the department:\n"<<e.dept<<endl;

return 0;

}

