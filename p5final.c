#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("enter three numbers\n");
  scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c,int *large)
{
  if(a>b && a>c)
  *large=a;
  else if(b>a && b>c)
  *large=b;
  else
  *large=c;
}
void output(int a,int b,int c,int large)
{
  printf("largest of three numbers %d %d and %d is %d ",a,b,c,large);
}
int main()
{
  int a,b,c,large1;
  input(&a,&b,&c);
  cmp(a,b,c,&large1);
  output(a,b,c,large1);
}
