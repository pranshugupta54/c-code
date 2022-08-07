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
  delay(500);
  printf("\nWelcome to DICE game!\n\n");
  delay(1000);
  printf("Enter name of 1st player : ");
  scanf("%s", A_name);
  printf("Enter name of 2nd player : ");
  scanf("%s", B_name);

  int max;
  printf("Enter maximum points : ");
  scanf("%d", &max);


  delay(1000);
  printf("\nInitialising the game...\n");
  delay(1000);

  printf("\n%s and %s get ready!!\n", A_name, B_name);
  printf("\nFirst dice is about to roll in...\n");
  delay(3000);
  printf("3..\n");
  delay(2000);
  printf("2..\n");
  delay(2000);
  printf("1..\n");
  delay(2000);
  printf("\n");


  for (int i = 1; pA < max && pB < max; i++)
  {
    int cont, p;

    // Chance of Player A 
    if (i !=1) // To avoid continue message in 1st roll.
    {
      // Points Stats
      delay(1000);
      printf("\n<-------POINTS------->\n");
      printf("%s's points : %d\n",A_name,pA);
      printf("%s's points : %d\n",B_name,pB);
      printf("<-------------------->\n\n");
      
      printf("Type 0 to exit. Any other number to continue and roll. ");
      scanf("%d", &cont);
      if (cont == 0) // To exit if user inputs 0.
        {
          delay(1000);
          printf("Exiting...\n");
          delay(2000);
          printf("Thank you for playing the game! \n");
          return 0;
          break;
        }
    }
    
    

    p = 0; // Resetting the points before rolling.
    printf("%s's turn: \n", A_name);
    delay(2000);
    printf("\n");
    printf("%s gets a %d. \n",A_name,p = roll()); // Rolling for A
    pA += p;

    if (pA >=max)
    {
      printf("\nYay!! %s won the game!\n\n", A_name);
      return 0;
      break;
    }

    // Points Stats

    delay(1000);
    printf("\n<-------POINTS------->\n");
    printf("%s's points : %d\n",A_name,pA);
    printf("%s's points : %d\n",B_name,pB);
    printf("<-------------------->\n\n");
    printf("Type 0 to exit. Any other number to continue and roll. ");
    scanf("%d", &cont);

    // Chance of Player B
    if (cont == 0) // To exit if user inputs 0.
    {
      delay(1000);
      printf("Exiting...\n");
      delay(2000);
      printf("Thank you for playing the game! \n");
      return 0;
      break;
    }

    p = 0; // Resetting the points before rolling.
    printf("%s's turn: \n", B_name);
    delay(2000);
    printf("\n");
    printf("%s gets a %d. \n",B_name,p = roll()); // Rolling for B
    delay(1000);
    printf("\n");
    pB += p;
}

if (pA >=max)
{
  printf("\nYay!! %s won the game!\n\n", A_name);
}
if (pB >=max)
{
  printf("\nYay!! %s won the game!\n\n", B_name);
}  
}

// Function for rolling a dice to print dice faces and returning a number from 1 to 6.
int roll(){
  int points;
srand(time(NULL));
  for (int i = 1; i < 7; i++)
  {
  switch(rand() % 6){
  
  case 0: // for value = 6
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