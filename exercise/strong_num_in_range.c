/*

48. Write a C program to find Strong Numbers within a range of numbers.

*/

# include<stdio.h>
# include<math.h>

int strong_num(int n);
int factorial(int n);

int main(){
  int start, end;
  printf("Input starting range of number :");
  scanf("%d", &start);
  printf("Input ending range of number :");
  scanf("%d", &end);

  for (int i = start; i <= end ; i++)
  {
    if (strong_num(i) == 1)
    {
      printf("%d ",i);
    }
    
  }
  printf("\n");
  
}


int strong_num(int n){ // n = number to check
  int sum = 0;
  int number = n;
  int rem;
  for (int i = 1; n > 0; i++)
  {
    rem = n % 10;
    sum += factorial(rem);
    n=n/10;
  }
  if (sum == number)
  {
    return 1;

  }
  else return 0;
  
  
}

int factorial(int x){
  int prod = 1;
  for (int i = 1; i <= x ; i++)
  {
    prod = prod * i;
  }
  return prod;
}


