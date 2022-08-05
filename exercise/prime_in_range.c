/*

27) check whether a given number is a perfect number or not.
If sum of divisors == number then perfect number.
*/

# include<stdio.h>
# include<math.h>

int main(){
  int n, sum = 1;
  printf("Enter number:");
  scanf("%d",&n);
  
  printf("Divisors -> 1");
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      printf(",%d",i);
      sum+= i;
    }
    
  }
  printf(",%d.",n);
  if (sum == n)
  {
    printf("\n%d is a Perfect Number.\n",n);
  }
  else printf("\n%d is NOT a perfect number.\n",n);
  
  
}



