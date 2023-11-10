/*
Project: Make a calculator using functions
*/

#include <stdio.h>
#include <stdlib.h>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if(num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
        exit(0);
    }
    return num1 / num2;
}

int main() {
    int choice;
    double num1, num2, result;

    printf("Select operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice(1/2/3/4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(choice) {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        default:
            printf("Error! Invalid operation.\n");
            exit(0);
    }

    printf("Result: %.2lf\n", result);
    return 0;
}
