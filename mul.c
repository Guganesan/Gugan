#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i ;
clrscr();
printf("Enter the multiplication table you need to find out: ");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
b=a*i;
printf("\n%d x %d = %d ",i,a,b);
}
getch();
}
