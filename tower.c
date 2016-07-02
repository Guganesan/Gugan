#include <stdio.h>
#include <conio.h>
void hanoi(char,char,char,int);
void main()
{
int a;
clrscr();
printf("Enter the disks: ");
scanf("%d",&a);
printf("\nTOWER OF HANOI FOR %d NUMBER OF DISKS:", a);
hanoi('A','B','C', a);
getch();
}
void hanoi(char from,char to,char other,int b)
{
if(b<=0)
printf("\nEnter a valid no of disks");
if(b==1)
printf("\nMove disk from %c to %c",from,other);
if(b>1)
{
hanoi(from,other,to,b-1);
hanoi(from,to,other,1);
hanoi(to,from,other,b-1);
}
  }
