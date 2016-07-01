#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char c[20],e;
int g,b;
clrscr();
printf("Enter the string:");
scanf("%s",c);
b=strlen(c);
for(g=0;g<b;++g){
e=c[g];
c[g]=c[g+1];
c[g+1]=e;
g++;
}
c[b+1]=0;
printf("\n %s",c);getch();
}
