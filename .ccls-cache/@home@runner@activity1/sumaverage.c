#include<stdio.h>
int main()
{
int a,b,c;
  printf("Enter the three numbers");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
int sum=a+b+c;
int average=sum/3;
printf("The sum of %d,%d and %d is %d\n",a,b,c,sum);
printf("The average of %d+%d+%d is %d",a,b,c,average);
}