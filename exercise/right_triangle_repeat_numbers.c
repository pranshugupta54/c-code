// 11) Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row. 
/*

1
22
333
4444
55555

*/
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
      printf("%d",i);
    }
    printf("\n");
  }
  
}
