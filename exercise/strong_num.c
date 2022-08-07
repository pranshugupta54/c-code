/*
47. Write a C program to check whether a number is a Strong Number or not.
Example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145;

*/

# include<stdio.h>
# include<math.h>

int factorial(int n);

int main(){
  int num, sum = 0;
  printf("Enter a number :");
  scanf("%d", &num);
  int number = num;
  for (int i = 1; num > 0; i++)
  {
    int rem;
    rem = num % 10; 
    sum += factorial(rem);
    num = num/10;
  }
  if (sum == number)
  {
    printf("%d is a Strong number.\n", number);
  }
  else printf("%d is NOT a strong number.\n",number);
  
    

}


int factorial(int m){
  int prod = 1;
  for (int i = 1; i <= m; i++)
  {
   prod = prod * i; 
  }
  return prod;
}

