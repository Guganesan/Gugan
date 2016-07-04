#include<stdio.h>
#include<string.h>
void main()
{
int w=0;
char b[100];
clrscr();
printf("Enter the string\n");
scanf("%s",b);
w=strlen(b);
w++;
printf("%d",w);
getch();
}
