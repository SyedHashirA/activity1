#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the age of RAM:");
  scanf("%d",&a);
  printf("Enter the age of SHYAM:");
  scanf("%d",&b);
  printf("Enter the age of AJAY:");
  scanf("%d",&c);

  if(a<b&&a<c)
  {
    printf("The youngest is RAM");
  }
  else if(b<c)
  {
    printf("The youngest is SHYAM");
  }
else
  {
    printf("The youngest is AJAY");
  }
}