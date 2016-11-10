#include <stdio.h>
#include<math.h>
float sum(int n,int a[10])
{
float s=0;
for(int i=0;i<n;i++)
{
s+=a[i];
}
return s;
}
float mean(int n,int a[10])
{

return sum(n,a)/n;
}
float sd(int n,int a[10])
{
float s=0;
float m=mean(n,a);
for(int i=0;i<n;i++)
{
s+=(a[i]-m)*(a[i]-m);
}
return sqrt(s/n);
}
void getinput(int n,int a[10])
{
for(int i=0;i<n;i++)
{
printf("enter no. of elements a[%d]\n",i);
scanf("%d",(a+i));
}
}
int main()
{
int n;
int a[10];
printf("enter no. of elements\n");
scanf("%d",&n);
getinput(n,a);
float s=sum(n,a);
float m=mean(n,a);
return 0;
}
