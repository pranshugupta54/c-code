// 9) Write a program in C to display the pattern like right angle triangle using an asterisk.

# include<stdio.h>
# include<math.h>

int main(){
  int n, sum =0;
  printf("Enter number:");
  scanf("%d",&n);
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
}
