/*
21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
*/



# include<stdio.h>
# include<math.h>

int main(){
  int n, sum = 0;
  printf("Enter number:");
  scanf("%d",&n);

  printf("Series -> ");
  for (int i = 1; i <= n; i++)
  {
    sum += pow(10, i);
    int term;
    term = pow(10,i) - 1;
    printf("%d ", term);
  }
  int sumFinal = sum - n;
  printf("\nSum of series = %d \n",sumFinal);  
}
