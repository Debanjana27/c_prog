#include<iostream>
using namespace std;
int sum(int a,int b=20)
{
int result;
result=a+b;
return result;
}
int main()
{
int a=100,b=100,s1;
s1=sum(a,b);
cout<<"addition of two numbers"<<s1<<endl;
int s2=sum(a);
cout<<"addition of two numbers"<<s2<<endl;
return 0;
}


