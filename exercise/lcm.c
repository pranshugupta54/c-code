/*
44. Write a program in C to find LCM of any two numbers using HCF.
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
      int lcm = numA * numB / i;
      printf("LCM is: %d\n",lcm);
      break;
      return 0;
    }  
  }
  
}
