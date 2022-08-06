/*
40. Write a C Program to display the pattern like pyramid using the alphabet.
Example: Number of letters = 4;
        A
      A B A 
    A B C B A
  A B C D C B A 
*/

# include<stdio.h>

int main(){
  int row;
  char sp[] = "  ";
  printf("Input the number of Letters (less than 26) in the Pyramid :");
  scanf("%d",&row);
  int a = 64;
  if (row > 26)
  {
    printf("There are only 26 alphabets so can't go higher :)\n");
    return 0;
  }
  else if (row < 1)
  {
    printf("Can't have that less rows :)\n");
    return 0;
  }
  
  for (int i = 1; i <= row; i++) //i = row number
  {
    for (int k = 1; k <= row-i; k++)
    {
      printf("%s", sp);
    }
    
    for (int j = 1; j <= 2*i-1; j++) // j = number of elements in a row
    {
      if (j <=i)
      {
        printf("%c ",a+j);
      }
      else printf("%c ",a+2*i-j);
      
    }
    printf("\n");
  }
  
}
