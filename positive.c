#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("a= ");
scanf("%d",&a);
if(a<0)
printf("\nThe number is negative");
else if(a>0)
printf("\nThe number is positive");
else
printf("\nYou have entered Zero");
getch();
}
