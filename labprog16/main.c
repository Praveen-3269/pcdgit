#include<stdio.h>
int main()
{
 int u;
char m[7];
FILE *h,*j,*k;
h=fopen("usn.txt","r");
j=fopen("student.txt","r");
k=fopen("out.txt","w");
if(h==NULL||j==NULL)
{
printf("file it does not exists\n");
return 0;
}
while((fscanf(h, "%d",&u)>=1)&&(fscanf(j, " %s",m)>=1))
{
fprintf(k,"%d %s\n",u,m);
}
fclose(h);
fclose(j);
fclose(k);
return 0;
}
