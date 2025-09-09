#include <stdio.h>
int main() 
{
    int a, b = 0, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    while (a != 0) 
    {
        c = a % 10;
        if (c % 3 == 0) 
        {
            b = b + c;
        }
        a = a / 10;
    }

    printf("Sum of digits divisible by 3: %d", b);

    return 0;
}