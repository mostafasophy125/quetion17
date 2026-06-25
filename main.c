/*
    Write a C program to input a four-digit number and reverse it using arithmetic operators.

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num ;
  puts("Enter 4 digit :");
  scanf("%d",&num);
  int digit1=num%10;
  int digit2=(num/10)%10;
  int digit3=(num/100)%10;
  int digit4=(num/1000);
  int reverse=digit1*1000+digit2*100+digit3*10+digit4;
  printf("reverse=%d",reverse);


    return 0;
}
