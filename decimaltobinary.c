#include <stdio.h>
#include <string.h>
void main(void) {
int c,bin[100],i=0,q;
clrscr();
printf("Enter decimal number:");
scanf("%d",&c);
q=c;
while(q!=0)
{
	bin[i++]=q%2;
	q=q/2;
}
while(i--)
printf("%d",bin[i]);
getch();
}
