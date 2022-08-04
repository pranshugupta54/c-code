/*
19. Write a program in C to display the n terms of harmonic series and their sum.

*/
# include<stdio.h>
# include<math.h>

int main(){
  int n;
  float sum = 1.0;
  printf("Enter number:");
  scanf("%d",&n);
  printf("1/1");
  for (int i = 2; i <= n; i++)
  {
    sum += 1.0/i;
    printf("+1/%d",i);
  }
  printf("\nSum is %f \n", sum);
  
}
