# include<stdio.h>
# include<math.h>

int main(){
   int num, digits;
   printf("Enter a number :");
   scanf("%d", &num);

   digits = 1 + log10(num);
   
   if (digits != 3)
   {
    printf("Only for 3 digits");
   }
   else{ // number = 153
    int hund, ten, one;
    hund = num/100; // hund = 1
    int rem_ten = num % 100;  // rem_ten = 53
    ten = rem_ten/10; // ten = 5
    one = rem_ten % 10; // one = 3
  //  printf("rem_ten = %d \n", rem_ten);
   // printf("Num: %d%d%d \n", hund, ten, one);
    if (num == pow(hund,3) + pow(ten,3) + pow(one,3))
    {
        printf("%d is Armstrong Number. \n", num);
    }
    else printf("%d is NOT an Armstrong Number. \n", num);
    
    
   }
   

   
}



/* 
Armstrong Number 
*/

/*

gcc armn.c
./a.out

*/