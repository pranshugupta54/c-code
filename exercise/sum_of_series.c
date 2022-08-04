/*
18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

*/
# include<stdio.h>
# include<math.h>

int factorial(int i);

int main(){
  int n, product = 1; 
  float x;
  float sum = 1;
  printf("Enter the value of x :");
  scanf("%f",&x);
  printf("Enter the number of terms :");
  scanf("%d",&n);
  
  for (int i = 1; i <= n-1; i++)
  {
    float pow_of_x = (float)pow(x, 2 * i);
    float sum_value = pow_of_x/factorial(2*i);
    sum = sum + (pow(-1,i)) * sum_value;
    printf("sum%d:%f \n",i,sum);
  
  }
  printf("Sum is %f", sum);
  
}

int factorial(int m){
  int prod = 1;
  for (int i = 1; i <= m; i++)
  {
   prod = prod * i; 
  }
  return prod;
}



/* 

x = 2
n = 3

1 - 2 + 2^4/24


*/