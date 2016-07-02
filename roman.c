#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
char rom[30];
int c[30], l, i, g, dec;
clrscr();
printf("Enter the roman number\n");
scanf("%s", &rom);
l =strlen(rom);
for(i = 0; i < l; i++)
{
switch (rom[i])
{
case 'I':  c[i] = 1;
	   break;
case 'V':  c[i] = 5;
	    break;
case 'X':  c[i] = 10;
	    break;
case 'L':  c[i] = 50;
	    break;
case 'C':  c[i] = 100;
	    break;
case 'D':  dec = dec + 500;
	    break;
case 'M':  c[i] = 1000;
	    break;
default :  printf("Invalid choice");
	    break;
      }
   }
   g = c[l - 1];
   for(i = l - 1; i > 0; i--)
   {
      if(c[i] > c[i - 1])
      {
     g = g - c[i - 1];
      }
      if(c[i] <= c[i - 1])
      {
     g = g + c[i - 1];
      }
   }
   printf("Decimal number is= %d", g);
   getch();
}
