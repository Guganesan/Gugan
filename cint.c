#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0;
clrscr();
printf("\n enter Number: ");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++b;
}
printf("%d",b);
getch();
}
