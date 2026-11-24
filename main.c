
#include <stdio.h>

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

int main()
{
    double a, b;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &b);

    switch(op)
    {
        case '+':
            printf("Result = %.2f\n", add(a, b));
            break;

        case '-':
            printf("Result = %.2f\n", subtract(a, b));
            break;

        case '*':
            printf("Result = %.2f\n", multiply(a, b));
            break;

        case '/':
            if(b != 0)
                printf("Result = %.2f\n", divide(a, b));
            else
                printf("Division by zero is not allowed\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}










