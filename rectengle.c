#include<stdio.h>
#include<conio.h>
void main()
{
int x1,x2,x3,x4,y1,y2,y3,y4;
int a1,a2,a3,a4,b1,b2,b3,b4;
clrscr();

printf("Enter  x1 and y1 in format eg 2,3 : ");
scanf("%d,%d",&x1,&y1);
printf("\nFirst point is  (%d,%d)",x1,y1);

x2=x1;
printf("\nEnter  y2: ");
scanf("%d",&y2);
printf("\nthe second point is (%d,%d)",x2,y2);

y3=y1;
printf("\nEnter x3 : ");
scanf("%d",&x3);
printf("\nthird point is (%d,%d)",x3,y3);

x4=x3;
y4=y2;
printf("\nSince the fourth point is (%d,%d)",x4,y4);

printf("\n\nEnter for Second Rectangle :");
printf("\nEnter  a1 and b1 in format eg 2,3 : ");
scanf("%d,%d",&a1,&b1);
printf("\nFirst point is  (%d,%d)",a1,b1);

a2=a1;
printf("\nEnter  b2: ");
scanf("%d",&b2);
printf("\nthe second point is (%d,%d)",a2,b2);

b3=b1;
printf("\nEnter a3 : ");
scanf("%d",&a3);
printf("\nthird point is (%d,%d)",a3,b3);

a4=a3;
b4=b2;
printf("\nfourth point is (%d,%d)",a4,b4);


if((x1<=a1 && x2<=b2) && (x3<=b3 && x4<=b4))
{
printf("false");
}
else
printf(" true");
getch();
}
