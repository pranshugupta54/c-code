/*

34. Write a program in C to find the prime numbers within a range of numbers.

*/

# include<stdio.h>

int prime_num(int n);
int main(){
  int start_num, end_num, n, sum = 1;
  printf("Input the starting range of number :");
  scanf("%d",&start_num);
  printf("Input the ending range of number :");
  scanf("%d",&end_num);
  printf("Prime Number between %d and %d: \n",start_num,end_num);
  for (int i = start_num; i <= end_num; i++)
  {
    if (i == 1 || 0 )
    {
      continue;
    }
    
    if (prime_num(i) == 1)
    {
      printf("%d ",i);
    }
    
  }
  printf("\n");
   
}
//Function to check whether a number is prime number.
int prime_num(int n){ 
  int sum = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
    
  }
  return 1;

}


