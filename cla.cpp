 #include<iostream>
using namespace std;
class rectangle
{
private:
int l,b,ar;
public:
void getdata()
{
cout<<"enter the length and breadth"<<endl;
cin>>l>>b;
}
void cal_area()
{
ar=l*b;

}
void showdata()
{
cout<<"area is:"<<endl;
cout<<ar<<endl;
}
};
int main()
{
rectangle r;
r.getdata();
r.cal_area();
r.showdata();
return 0;
}




