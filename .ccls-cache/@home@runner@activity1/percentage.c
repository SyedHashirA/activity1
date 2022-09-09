#include<stdio.h>
int main()
{
  float english,electronics,maths,physics,chemistry,kannada;
  printf("Enter your english marks:");
  scanf("%f",&english);
  printf("Enter your electronics marks:");
  scanf("%f",&electronics);
  printf("Enter your maths marks:");
  scanf("%f",&maths);
  printf("Enter your physics marks:");
  scanf("%f",&physics);
  printf("Enter your chemistry marks:");
  scanf("%f",&chemistry);
  printf("Enter your kannada marks:");
  scanf("%f",&kannada);
  float sum=english+electronics+maths+physics+chemistry+kannada;
  printf("Your total marks is %f\n",sum);
  float percentage=sum/600*100;
  printf("Your percentage is %f",percentage);
}
