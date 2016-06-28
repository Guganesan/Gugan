#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y;
clrscr();
printf("Enter Date : ");
scanf("%d-%d-%d",&d,&m,&y);
switch(m)
{
case 1:	printf("January");
	break;
case 2:	printf("\nFebruary");
	break;
case 3:	printf("\nMarch");
	break;
case 4:	printf("\nApril");
	break;
case 5:	printf("\nMay");
	break;
case 6:	printf("\nJune");
	break;
case 7:	printf("\nJuly");
	break;
case 8:	printf("\nAugust");
	break;
case 9:	printf("\nSeptember");
	break;
case 10:printf("\nOctober");
	break;
case 11:printf("\nNovember");
	break;
case 12:printf("\nDecember");
	break;
}
getch();
}
