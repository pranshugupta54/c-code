# include<stdio.h>
# include<math.h>
#include <stdlib.h>
#include <time.h>

int roll();

void delay(int second){
  int milsec = 1000 * second;
  clock_t startTime = clock();
  while(clock() < (startTime + milsec));
}

int main(){
  int pA=0,pB=0;
  char A_name[] = "Player 1";
  char B_name[] = "Player 2";
  printf("Enter name of 1st player : ");
  scanf("%s", A_name);
  printf("Enter name of 2nd player : ");
  scanf("%s", B_name);

  int max;
  printf("Enter maximum points : ");
  scanf("%d", &max);

  printf("%s and %s get ready!!\n", A_name, B_name);
  printf("First dice is about to roll in...\n");
  delay(3000);
  printf("3..\n");
  //delay(2000);
  printf("2..\n");
  //delay(2000);
  printf("1..\n");
  //delay(2000);
  printf("\n");


  //int max = 20;

  //roll();
  //printf("Points = %d \n", roll());
  for (int i = 1; i < 3; i++)
  {
  int p;
  printf("%s gets a %d. \n",A_name,p = roll());
  pA += p;
  }
  printf("\n Total points = %d", pA);
  
}


int roll(){
  int points;
srand(time(NULL));
  for (int i = 1; i < 7; i++)
  {
  switch(rand() % 6){
  
  case 0:

  printf("+-----+ \n");
	printf("| 0 0 | \n");
  printf("| 0 0 | \n");
	printf("| 0 0 | \n");
	printf("+-----+ \n");
  points = 6;
  break;


  case 1:

  printf("+-----+ \n");
	printf("|     | \n");
  printf("|  0  | \n");
	printf("|     | \n");
	printf("+-----+ \n");
  points = 1;
  break;

  case 2:

  printf("+-----+ \n");
	printf("|     | \n");
  printf("| 0 0 | \n");
	printf("|     | \n");
	printf("+-----+ \n");
  points = 2;
  break;

  case 3:

  printf("+-----+ \n");
	printf("|     | \n");
  printf("|0 0 0| \n");
	printf("|     | \n");
	printf("+-----+ \n");
  points = 3;
  break;

  case 4:
  printf("+-----+ \n");
	printf("| 0 0 | \n");
  printf("|     | \n");
	printf("| 0 0 | \n");
	printf("+-----+ \n");
  points = 4;
  break;
  
  case 5:
  printf("+-----+ \n");
	printf("| 0 0 | \n");
  printf("|  0  | \n");
	printf("| 0 0 | \n");
	printf("+-----+ \n");
  points = 5;
  break;

  default: 
  printf("ERROR");
  return 402;
  break;

  }
  printf("\n");
  delay(2000);
  }
  return(points);


}