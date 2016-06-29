#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
char a[15];
int b=0;
clrscr();
printf("Enter a String: \n");
scanf("%s",a);
b=strlen(a);
printf("Length= %d\n",b);
getch();
}
