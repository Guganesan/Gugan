#include <stdio.h>
#include<conio.h>
void main()
{
char a;
printf("Enter a character\n");
scanf("%c", &a);
if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a =='o' || a=='O' || a == 'u' || a == 'U')
printf("%c is a vowel.\n", a);
else
printf("%c is not a vowel.\n", a);
getch();
}
