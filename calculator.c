#include <stdio.h>
#include <math.h>

int main(){
    int operation;
    double num1;
    double num2;
    double result;

    printf("\nWelcome to Samka's Calculator!\n");

    puts("******************************************");
    puts("Bellow are your options: ");
    puts("0 - Addition");
    puts("1 - Subtraction");
    puts("2 - Multiplication");
    puts("3 - Division");
    puts("4 - Area");
    puts("5 - Circunference");
    puts("6 - Hypotenuse");
    puts("7 - Baskhara");
    puts("8 - Temperature Conversion");
    puts("9 - Currency Conversor");
    
    printf("\nWhat type of operation would you like to do? ");
    scanf("%1d", &operation);

    printf("Insert value of X: ");
    scanf("%lf", &num1);
    printf("Insert value of Y: ");
    scanf("%lf", &num2);

    switch (operation)
    {
    case 0:
        result = num1 + num2;
        printf("The result of the operation %.2f + %.2f = %.2f", num1, num2, result);
        break;
    }

    return 0;
}
