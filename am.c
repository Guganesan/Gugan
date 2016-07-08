#include <stdio.h>
#include<conio.h>
void main()
{
int n, a,l,sum = 0;
clrscr();
printf("Enter any number to check Armstrong number: ");
scanf("%d", &n);
a = n;
while(n != 0)
{
l= n % 10;
sum += (l*l*l);
 n = n / 10;
   }
if(a == sum)
{
printf("\n%d is Armstrong number.", a);
    }
    else
    {
	printf("\n%d is not Armstrong number.", a);
    }

 getch();
}
