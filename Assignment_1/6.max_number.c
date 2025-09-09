#include <stdio.h>
int main()
{
    float a, b;

    printf("Enter 1st number: ");
    scanf("%f", &a);

    printf("Enter 2nd number: ");
    scanf("%f", &b);

    if(a>b) {printf("1st number is greater than the second number");}
    else if (a==b) {printf("Both the numbers are equal");}
    else printf("2nd number is greater than the 1st number");

    return 0;
}