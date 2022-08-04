# include<stdio.h>
# include<math.h>

int main(){
  int n, sum =0;
  printf("Enter number:");
  scanf("%d",&n);
  printf("The odd numbers are :");
  for (int i = 1; i <= n; i++)
  {
    printf("%d ",2*i-1);
    sum += 2*i-1;
  }
  printf("\n The sum of off natural number upto %d terms : %d \n",n,sum);

}

//test


//test2
