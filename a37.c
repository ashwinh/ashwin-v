#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
a=10;
b=20;
{
printf("elements before swapping");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("elements sfter swapping:%d %d",a,b);
getch();
}
