#include<stdio.h>
void main()
{
int i,j,a[10],t;
clrscr();
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=10;i++)
{
for(j=i;j<=10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d",a[10]);
return 0;
}
