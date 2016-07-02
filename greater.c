#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter A: ");
scanf("%d",&a);
printf("Enter B: ");
scanf("%d",&b);
printf("Enter C: ");
scanf("%d",&c);
if(a>b && a>c)
printf("1st number is  greater");
else if(b>a && b<c)
printf("3rd number is greater");
else
printf("2nd number is greater");
getch();
}
