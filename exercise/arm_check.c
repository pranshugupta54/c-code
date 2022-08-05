/*
Armstrong number

Example: 153 = 1^3 + 5^3 + 3^3 [Power = no. of digits]
Example: 1634 ->> 1^4 + 6^4 + 3^4 + 4^4
*/

# include<stdio.h>
# include<math.h>

int arm_num(int n);
int main(){
  int n;
  printf("Enter a number :");
  scanf("%d",&n);   
  
  if (arm_num(n) == 1)
  {
    printf("%d is an Armstrong Number. \n",n);
  }
  else if (arm_num(n) == 0)
  {
    printf("%d is NOT an Armstrong Number. \n",n);
  }
  else printf("Error");
  
}
//Function to check whether if number is Armstrong Number.

int arm_num(int n){ 
  int sum = 0;
  int digits = 1 + log10(n); // digits = 4
  int value = n, rem = 0;
  for (int i = 1; i <= digits; i++) // i =1,2,3,4
  {
    rem = value%10;
    value = (int)value/10;
    sum += pow(rem,digits);
  }
  
  if (sum == n)
  {
    return 1;
  }
  
  else{  
  return 0;} 

}


