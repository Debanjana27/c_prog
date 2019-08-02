#include<stdio.h>
void main()
{
int arr[50],n,i,ec=0,oc=0;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the values in array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]%2!=0)
{
oc++;
}}
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
ec++;
}}
printf("odd count%d\nevencount%d",oc,ec);
}

