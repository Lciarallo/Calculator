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

    if(operation != 8, 9)
    {
        puts("******************************************");
        puts("Insert the value of A");
        scanf("%d", &num1);
        puts("Insert the value of B);
        scanf("%d", &num2);
        puts("******************************************\n");
    }

    return 0;
}