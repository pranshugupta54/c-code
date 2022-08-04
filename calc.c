# include<stdio.h>
# include<string.h>

int main() {
    printf("Enter sum, sub \n");
    char calc[] = "none";
    scanf("%s", calc);

    int numA, numB;

    printf("Enter 1st number:");
    scanf("%d", &numA);
    printf("Enter 2nd number:");
    scanf("%d", &numB);
if (strcmp(calc, "sum") == 0)
{
    printf("Sum is: %d \n", numA + numB);

}
else if (strcmp(calc, "sub") == 0)
{
    printf("Sub is: %d \n", numA - numB);
}

else printf("Error");


    return 0;

}