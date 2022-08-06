/*
38. Write a program in C to check whether a number is a palindrome or not.
-> Number remains the same when written in forward or backward direction.
*/

# include<stdio.h>

int main(){
  int num, sum = 0, rem;
  printf("Input a number:");
  scanf("%d",&num);
  int number = num;
  for (int i = num; num > 0 ; num=num/10)
  {
    rem = num%10;
    sum = sum*10+rem;
  }
  if (sum == number)
  {
    printf("Palindrome number\n");
  }
  else printf("Not a palindrome number\n");
  
 // printf("Reversed number is %d\n",sum);
  
}
