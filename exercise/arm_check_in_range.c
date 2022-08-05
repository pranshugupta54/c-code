/*
Armstrong number
Example: 153 = 1^3 + 5^3 + 3^3 [Power = no. of digits]
Example: 1634 ->> 1^4 + 6^4 + 3^4 + 4^4

30. Write a C program to find the Armstrong number for a given range of number.

*/

# include<stdio.h>
# include<math.h>

int arm_num(int n);
int main(){
  int start,end,n;
    
  printf("Input starting number of range:");
  scanf("%d",&start);
  printf("Input ending number of range:");
  scanf("%d",&end); 

  for (int i = start; i <= end; i++)
  {
    if (arm_num(i) == 1)
  {
    printf("%d ",i);
  }
  }
  printf("is/are Armstrong number(s) between %d and %d.\n",start,end);
  
  
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


// Issue: Returns an incomplete line if there is no arm_num in between.
