#include<iostream>
using namespace std;
class item
{
private:
int number;
float price;
public:
void getdata(int,float);
void putdata()
{
cout<<"number"<<number<<endl;
cout<<"price"<<price<<endl;
}};
void item::getdata(int a,float b)
{
number=a;
price=b;
}
int main()
{
item a1;
a1.getdata(10,20.22);
a1.putdata();
return 0;
}

