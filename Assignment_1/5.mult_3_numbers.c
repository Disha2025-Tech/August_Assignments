#include <stdio.h>
int main()
{
    float a, b, c;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter third number: ");
    scanf("%f", &c);

    printf("Multiplication of these 3 numbers is %f\n",a*b*c);

    return 0;
}