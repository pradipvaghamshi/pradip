//delet spece in char with string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,l,j;
char a[20];
clrscr();
printf("enter your data :");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
	if(a[i]==' ')
	{
		for(j=i;j<l;j++)
		{
			a[j]=a[j+1];
		}
	}
}
l--;
puts(a);
getch();
}