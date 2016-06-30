#include<stdio.h>
#include<conio.h>
long fact(int);
void main()
{
int n,g,e;
clrscr();
printf("Enter how many lines: ");
scanf("%d",&n);
for(g=0;g<n;g++)
{
for(e=0;e<n-g-1;e++)
printf(" ");
for(e=0;e<=g;e++)
printf("%ld ",fact(g)/(fact(e)*fact(g-e)));
printf("\n");
}
getch();
}
long fact(int num)
{
long f=1;
int g=1;
while(g<=num)
{
f=f*g;
g++;
}
return f;
}
