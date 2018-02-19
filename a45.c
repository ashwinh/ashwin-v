include<stdio.h>
#include<conio.h>
void main()
{
int num,digit,count=0;
printf("\n enter the number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
num=num/10;
count=count++;
}
printf("\n The number of numericals in the given number is%d",count);
getch();
}
