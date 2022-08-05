/*
31) Write a program in C to display the pattern like a diamond.
Example: Rows = 5;  
    * 
   ***
  ***** 
 ******* 
********* 
 *******
  *****
   ***
    * 


*/

# include<stdio.h>

int main(){
  int row;
  char a[] = " * "; //asterisk
  char sp[] = "   "; //space
  printf("Enter number of rows :");
  scanf("%d",&row);
  
  for (int i = 1; i <= row; i++) // i = row number
  {
    for (int k = 1; k <= row-i; k++)
    {
      printf("%s", sp);
    }
    
    for (int j = 1; j <= 2*i-1; j++)
    {
      printf("%s",a);
    }
    printf("\n");    
  }
for (int i = row-1; i >= 1 ; i--)
  {
    for (int k = 1; k <= row-i; k++)
    {
      printf("%s", sp);
    }
    
    for (int j = 1; j <= 2*i-1; j++)
    {
      printf("%s",a);
    }
    printf("\n"); 
    
  }

   
}

