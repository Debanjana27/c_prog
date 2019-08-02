#include<stdio.h>
int main()
{
int i,n,arr[50],sum=0;
printf("enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the %d elements\n",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];

}
printf("%d",sum);

return 0;
}

