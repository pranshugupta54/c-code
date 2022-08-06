/*
37. Write a program in C to display the number in reverse order.

*/

# include<stdio.h>

int main(){
  int num, sum = 0, rem;
  printf("Input a number:");
  scanf("%d",&num);

  for (int i = num; num > 0 ; num=num/10)
  {
    rem = num%10;
    sum = sum*10+rem;
  }
  printf("Reversed number is %d\n",sum);
  
}
