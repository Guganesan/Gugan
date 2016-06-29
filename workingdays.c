#include<stdio.h>
#include<conio.h>
void main()
{
char d[20];
clrscr();
printf("Day: ");
scanf("%s",d);
if((strcmp(d,"sunday")==0)|| (strcmp(d,"Sunday")==0))
printf("\nFalse");
else if((strcmp(d,"monday")==0)||(strcmp(d,"tuesday")==0)||(strcmp(d,"wednesday")==0)||(strcmp(d,"thursday")==0)||(strcmp(d,"friday")==0)||(strcmp(d,"saturday")==0)||(strcmp(d,"Monday")==0)||(strcmp(d,"Tuesday")==0)||(strcmp(d,"Wednesday")==0)||(strcmp(d,"Thursday")==0)||(strcmp(d,"Friday")==0)||(strcmp(d,"Saturday")==0))
printf("\nTrue");
else
printf("\nInvalid Input");
getch();
}
