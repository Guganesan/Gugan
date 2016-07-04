#include<stdio.h>
#include<conio.h>
void main()
{
   int *ptr1, *ptr2;
   int num;

   printf("\nEnter two numbers : ");
   scanf("%d %d", ptr1, ptr2);

   num = *ptr1 + *ptr2;

   printf("Sum = %d", num);
  getch();
}
