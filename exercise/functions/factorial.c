/*
Factorial Function
*/

# include<stdio.h>
# include<math.h>

int factorial(int n);
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  printf("Factorial of %d is %d.\n",num,factorial(num));
}

int factorial(int m){
  int prod = 1;
  for (int i = 1; i <= m; i++)
  {
   prod = prod * i; 
  }
  return prod;
}
