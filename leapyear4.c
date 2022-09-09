#include<stdio.h>
int main()
{
  int a;
  printf("Enter the year:");
  scanf("%d",&a);

  if(a%400==0)
    printf("The entered year is leap year");
    else if(a%100==0)
    printf("The entered year is not leap year");
    else if(a%4==0)
    printf("The entered year is a leap year");
     else
      printf("The entered year is not a leap year");
}
