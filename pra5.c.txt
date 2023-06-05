//same or not same in string program
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char a[20],b[20];
clrscr();
printf("enter your data :");
scanf("%s%s",&a,&b);
i=strcmp(b,a);
if(i==0)
{
	printf("string is same ");
}
else
{
	printf("string is not same");
}
getch();
}

