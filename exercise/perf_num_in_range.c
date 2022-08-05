/*

28. Write a C program to find the perfect numbers within a given number of range.

*/

# include<stdio.h>

int perf_num(int n);
int main(){
  int start_num, end_num, n, sum = 1;
  printf("Input the starting range of number :");
  scanf("%d",&start_num);
  printf("Input the ending range of number :");
  scanf("%d",&end_num);
  
  for (int i = start_num; i <= end_num; i++)
  {
    if (i == 1 || 0)
    {
      continue;
    }
    
    if (perf_num(i) == 1)
    {
      printf("%d ",i);
    }
    
  }
  printf("\n");
   
}
//Function to check whether a number is perfect number.
int perf_num(int n){ 
  int sum = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      sum+= i;
    }
    
  }
  
  if (sum == n)
  {
    
    return 1;
  }
  else{  
  return 0;} 

}


