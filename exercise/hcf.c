/*
43. Write a C program to find HCF (Highest Common Factor) of two numbers.
*/

# include<stdio.h>
# include<math.h>

int main(){
  int numA, numB;
  printf("Enter 1st number :");
  scanf("%d", &numA);
  printf("Enter 2nd number :");
  scanf("%d", &numB);
  if (numA <= 0 || numB <= 0)
  {
    printf("Only for positive whole number.\n");
    return 0;
  }
  
  for (int i = numA; i > 0; i--)
  {
    if (numA % i == 0 && numB % i == 0)
    {
      printf("HCF is: %d\n",i);
      break;
      return 0;
    }  
  }
  
}
