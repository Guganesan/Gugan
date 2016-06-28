#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,b=0;
clrscr();
printf("Enter the words: ");
scanf("%s",a);
for(i=0;a[i]!=0;i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
{
b++;
}
}
printf("No of vowels= %d",b);
getch();
}
