#include<stdio.h>
#include<conio.h>
void main()
{
int m,i,y=2,c=0;
clrscr();
printf("Enter the number : ");
scanf("%d",&m);
while(y<=m)
{
for(i=2;i<y;i++)
{
if(y%i==0)
goto t;
}
printf("\n%d",y);
c++;
t:y++;
}
printf("\nTotal numbers are= %d",c);
getch();
}

