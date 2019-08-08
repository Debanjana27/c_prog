#include<iostream>
using namespace std;
int area(int side);
double area(double radius);
int area(int l,int b);
int main()
{
cout<<"area of square"<<area(5);
cout<<"area of circle"<<area(2.2);
cout<<"area of rectangle"<<area(10,20);
return 0;
}
int area(int side)
{
return (side*side);
}
double area(double radius)
{
return (3.14*radius*radius);
}
int area(int l,int b)
{
return (l*b);
}
