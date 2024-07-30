#include <stdio.h>

int main()
{
    double a, b;
    char ch;

    printf("Enter the digits ");
    scanf("%lf %lf", &a, &b);

    printf("Enter an operator (+, -, *, /), "
           "if want to exit press x: ");
    scanf(" %c", &ch);
    if (ch == 'x')
    {
        printf(" You have exited the program ");
        break;
    }
    switch (ch)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
         break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
        break;

    default:printf("Error! please write a valid operator\n");
        break;
    }
    return 0;

}