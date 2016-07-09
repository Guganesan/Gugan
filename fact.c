#include <stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1;
clrscr();
printf("find number: ");
scanf("%d",&a);
for (b=1;b<=a;b++)
{
c=c*b;
 }
printf("%d",c);
getch();
}
