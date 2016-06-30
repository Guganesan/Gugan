#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char w[20],s[20];
int i,j=0;
clrscr();
printf("Enter any word: ");
scanf("%s",w);
strrev(w);
printf("reversed word is: %s",w);
for(i=0;i<=strlen(w);i++)
{
if(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'||w[i]=='A'||w[i]=='E'||w[i]=='I'||w[i]=='O'||w[i]=='U')
w[i]=' ';
else
s[j++]=w[i];
}
s[j]='\0';
printf("\nThe word without vowel is->%s",s);
getch();
}
