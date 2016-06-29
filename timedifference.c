#include<stdio.h>
#include<conio.h>
void main()
{
 int hr1,min1,hr2,min2,p,q,r,s,t;
 clrscr();
 printf("\nFirst time: ");
 scanf("\n%d\n%d",&hr1,&min1);
 p=hr1*60;
 t=min1+p;
 printf("\nSecond time: ");
 scanf("\n%d\n%d",&hr2,&min2);
 q=hr2*60;
 s=min2+q;
 r=s-t;
 printf("\nDifference is: %d",r);
 getch();
}
