#include<stdio.h>
#include<conio.h>
void main()
{
int x1,x2,y1,y2,a;
clrscr();
printf("Enter x1,x2,y1,y2 : ");
scanf("%d\n%d\n%d\n%d",&x1,&x2,&y1,&y2);
a=((x1+x2)*(x1+x2))+((y1+y2)*(y1+y2));
printf("sqrt is= %d",a);
getch();
}
