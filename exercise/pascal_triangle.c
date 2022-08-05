/*
33. Write a C program to display Pascal's triangle.
Example: Rows = 5;  
        1
      1   1 
    1   2   1 
  1   3   3   1
1   4   6   4   1 

*/

# include<stdio.h>

int main(){
  int row;
  char a[] = " * "; //asterisk
  char sp[] = "   "; //space
  printf("Enter number of rows :");
  scanf("%d",&row);
  
  for (int i = 1; i <= row; i++)
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

