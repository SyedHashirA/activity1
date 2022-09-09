#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the three angles of a triangle");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  int sum=a+b+c;

  if(sum==180)
  {
   printf("the entered triangle is valid");
  }
  else
  {
   printf("the entered triangle is invalid");
  }
}