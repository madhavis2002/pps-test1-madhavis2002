#include<stdio.h>
int input()
{
  int n;
  printf("enter the no.\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a1,int b1,int c1)
{
  int large;
  if(a1>b1 && a1>c1)
  large=a1;
  else
  if(b1>a1 && b1>c1)
  large=b1;
  else
  large=c1;
  return large;
}
void output(int a,int b,int c,int l1)
{
  printf("largest of the three no.%d,%d and %d is %d\n",a,b,c,l1);
}

int main()
{
  int a=input();
  int b=input();
  int c=input();
  int l=cmp(a,b,c);
  output(a,b,c,l);
  return 0;
}