#include<stdio.h>
int main()
{
  int num1,num2;
  printf("Enter the two numbers");
  scanf("%d",&num1);
  scanf("%d",&num2);

  if(num1<num2)
  {
    printf("%d is huge compared to %d",num2,num1);
  }
  else
  {
    printf("%d is huge compared to %d",num1,num2);
  }
}