//remove repeted char in string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,l,j,k;
char a[20];
clrscr();
printf("enter your data :");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
	for(j=i+1;a[j]!='\0';j++)
	{
		if(a[j]==a[i])
		{
			for(k=j;a[k]!='\0';k++)
			{
				a[k]=a[k+1];
			}
		}
	}
}
printf("%s",a);
getch();
}

