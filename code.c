# include<stdio.h>

void table(int arr[][10]);

int main(){

  int arr[1][10];
  table(arr);

}

void table(int arr[][10]){
  for (int i = 1; i <= 10; i++)
  {
    arr[1][i] = 2 * i;
    printf("%d\n", arr[1][i]);
  }
  
}