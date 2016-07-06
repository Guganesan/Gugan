#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
   char a[50],b[50];
   clrscr();
   printf("Enter a word:");
   scanf("%s",a);
   strcpy(b,a);
   strrev(b);
   if(strcmp(a,b)==0)
   printf("\nPalindrome");
   else
   printf("\nNot palindrome");
   getch();
}
