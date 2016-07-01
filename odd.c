#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("a= ");
scanf("%d",&a);
if(a==0)
{}
else if(a%2==0)
printf("The given number is Even");
else
printf("The given number is odd");
getch();
}
