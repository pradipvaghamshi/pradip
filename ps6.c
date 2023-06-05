#include<stdio.h>
#include<conio.h>
void dividend(int * , int *);
void multiple(int * ,int *);
void sub(int * , int *);
void sum(int * , int *);
void main()
{
 int a,b;
 clrscr();
 printf("enter your value:");
 scanf("%d%d",&a,&b);
 sum(&a,&b);
 sub(&a,&b);
 multiple(&a,&b);
 dividend(&a,&b);
 getch();
}
 void sum(int *p,int *s)
 {
  int ans;
  ans=*p+*s;
  printf("your sum ans is ==>%d\n",ans);
 }
   void sub(int *p,int *s)
   {
    int ans;
    ans=*p-*s;
    printf("your sub ans is ==>%d\n",ans);
   }
    void multiple(int *p,int *s)
    {
     int ans;
     ans=*p**s;
     printf("your multiple ans is==>%d\n",ans);
    }
     void dividend(int *p ,int *s)
     {
      float ans;
      ans=*p / *s;
      printf("your dividend ans is==>%f",ans);
     }
