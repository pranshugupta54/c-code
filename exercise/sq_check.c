/*

Check if the number is a perfect Square.

*/

# include<stdio.h>
# include<math.h>

int sq_check(int n);
int main(){
  int n, sum =0;
  printf("Enter number:");
  scanf("%d",&n);
  
  if (sq_check(n) == 1)
  {
    int k = pow(n,0.5);
    printf("%d is a perfect Square of %d.\n",n,k);
  }
  else if (sq_check(n) == 0)
  {
    printf("%d is NOT a perfect square. \n",n);
  }
  else printf("Error");
  
  
}

int sq_check(int n){

  for (int i = 0; i <= n; i++)
  {
    int sq_num = i * i;
    if (sq_num == n)
    {
      return 1;
      break;
    }
  }
  return 0;

}



