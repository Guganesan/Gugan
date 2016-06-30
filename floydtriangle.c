#include<stdio.h>
#include<stdio.h>
void main()
{
int a,e,c,b= 1;
clrscr();
printf("Enter rows  no of Rows: ");
scanf("%d",&a);
for (e=1;e<=a;e++)
{
for (c=1;c<=e;c++)
{
printf("%d ",b);
b++;
}
printf("\n");
}
getch();
}
