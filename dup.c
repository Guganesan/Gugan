#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char b[100];
int n,i,j;
clrscr();
printf("Enter a string : ");
gets(b);
n=strlen(b);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
if(b[i]==b[j])
{
b[j]='.';
}
}
}
}
for(i=0;i<n;i++)
{
if(b[i]!='.')
printf("%c",b[i]);
}
getch();
}
