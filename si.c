#include<stdio.h>
int main()
{
  int p,t,r;
  printf("Enter the principle,time and rate");
  scanf("%d",&p);
  scanf("%d",&t);
  scanf("%d",&r);
  int simple_interest=p*t*r/100;
  printf("The simple interest is %d",simple_interest);
}