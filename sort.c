#include<stdio.h>
int main()
{
int n,arr[30],i,j,a;
printf("enter the number of inputs to be entered");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the elements%d\n",i);
 scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
a=arr[i];
arr[i]=arr[j];
arr[j]=a;
}
}
}
printf("the numbers in ascending order:");

for(i=0;i<n;i++)

printf("the sorted array is%d\n",arr[i]);

return 0;
}
