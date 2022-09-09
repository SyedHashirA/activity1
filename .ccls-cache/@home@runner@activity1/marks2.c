#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  printf("Enter the marks of five subjects:");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  float sum=a+b+c+d+e;
  printf("Your total marks %f\n",sum);
  float per=(sum/500)*100;
  printf("Your Percentage is %f",per);
  if(per>=60)
  {
    printf("First Division");
  }
  else if(per>=50&&per<60)
  {
    printf("Second Division");
  }
  else if(per>=40&&per<50)
  {
    printf("Third Division");
  }

  else
  {
    printf("Fail");
  }
}