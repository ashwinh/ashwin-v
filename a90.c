#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void) 
{
char str[50];
int i,n;
printf("\nenter the alphanumeric string:\n");
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]>='0' && str[i]<='9')
{
printf("%c",str[i]);
}
}
getch();
}
