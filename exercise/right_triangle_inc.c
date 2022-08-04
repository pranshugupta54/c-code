// 12) Write a program in C to make such a pattern like right angle triangle with number increased by 1.
/*

1
2 3
4 5 6
7 8 9 10

*/
# include<stdio.h>
# include<math.h>


int main(){
  int n, k=1;
  printf("Enter number:");
  scanf("%d",&n);
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d",k++);
    }
    printf("\n");
  }
  
}
