/*
41. Write a program in C to convert a decimal number into binary without using an array
*/

# include<stdio.h>

int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int rem = 0, sum = 0;
  int number = num;
  for (int i = 1; num > 0; i++)
  {
    rem = num%2;
    //printf("%d",rem);
    num = num/2;
    sum = sum*10+rem;
  }
//  printf("sum is %d\n",sum);
int ans = 0;
  for (int i = sum; sum > 0 ; sum=sum/10)
  {
    rem = sum%10;
    ans = ans*10+rem;
  }
  printf("Binary of %d is %d\n",number, ans);
  

}
