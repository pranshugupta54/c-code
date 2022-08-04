/*
22. Write a program in C to print the Floyd's Triangle.

1 
01
101 
0101 
10101
*/


# include<stdio.h>
# include<math.h>

int main(){
  int n, sum =0;
  printf("Enter number of rows:");
  scanf("%d",&n);

  for (int i = 1; i <= n; i++) // i = row number
  {
    
    if (i % 2 != 0) //odd row
    {
      int times = i/2;
      for (int k = 1; k <= times; k++)
      {
        printf("10");
      }
        printf("1\n");
    }
    else //even row
    {   
      int times = i/2; 
      for (int k = 1; k <= times; k++)
      {
        printf("01");
      }

      printf("\n");
    }

    
  }
  

  
}



