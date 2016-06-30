#include<stdio.h>
#include<conio.h>
void main()
{
char n[10];
clrscr();
printf("Enter value: ");
scanf("%s",n);
if(isdigit(n))
{
printf("\nFalse");
}
else
{
printf("\nTrue");
}
getch();
}
