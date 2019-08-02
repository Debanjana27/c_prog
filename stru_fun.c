#include<stdio.h>
struct student{
char sname[30];
int roll_no;
int marks;
};
display(struct student);

 main()
{
struct student stu1={"anil",78,45};
struct student stu2={"sdndb",65,66};
display(stu1);
display(stu2);

}
display(struct student stu)
{
printf("name%s\n",stu.sname);
printf("roll no%d\n",stu.roll_no);
printf("marks%d\n",stu.marks);
}

