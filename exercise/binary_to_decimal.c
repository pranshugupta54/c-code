/*
42. Write a program in C to convert a binary number into a decimal number without using array, function and while loop.
*/

# include<stdio.h>
# include<math.h>

int main(){
  int num, rem, sum=0;
  printf("Enter a binary number: ");
  scanf("%d",&num);
  int digits = 1+log10(num);

  for (int i = 0; i < digits; i++)
  {
    rem = num % 10;
    num = num/10;
    sum += rem * pow(2,i);
    if (rem != 1 & rem != 0)
    {
      printf("Number doesn't look like binary as it contains %d.\n",rem);
      return 0;
      break;
      
    }
    
  }
  printf("The equivalent Decimal Number is %d\n",sum);
  return 0;
}
