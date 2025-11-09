#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    int choice;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("\nResult = %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("\nResult = %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("\nResult = %.2f\n", result);
            break;
        case 4:
            if (num2 != 0)
                result = divide(num1, num2);
            else {
                printf("\nError: Division by zero not allowed.\n");
                return 0;
            }
            printf("\nResult = %.2f\n", result);
            break;
        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
