#include <stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1;
clrscr();
printf("number to find factorial: ");
scanf("%d",&a);
for (b=1;b<=a;b++)
c=c*b;
printf("Factorial is: %d",c);
getch();
}
