#include<stdio.h>
int main()
{
int n, arr[n],i,e;
printf("enter the no of elements to be entered");
scanf("%d",&n);
printf("enter the element to be searched");
scanf("%d",&e);
for(i=0;i<n;i++)
{
printf("enter the element%d\n",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]==e){
printf("search successful");
printf("the element is at %d",(i+1));
break;
}
else 
printf("search not found");
}
return 0;
}

