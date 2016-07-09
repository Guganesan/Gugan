#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
clrscr();
printf("Enter a number: ");
scanf("%s",a);
strrev(a);
printf("%s",a);
getch();
}
