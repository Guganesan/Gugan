#include<stdio.h>
#include<conio.h>
void main()
{
int n,m=0,y,i=0;
int b=1,k,p=1,j;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
for(m=0;m<n/2;m++)
{
b=1;
y=m;
for(i=0;y>9;i++)
{
b=b*y%10;
y=y/10;
}
b=b*y;
p=b*m;
if(n==p)
printf("The seed is= %d",m);
}
getch();
}
