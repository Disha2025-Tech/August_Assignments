#include <stdio.h>
int main() 
{
    int a, b = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    while (a != 0) 
    {
        a = a / 10;
        b++;
    }

    printf("Number of digits: %d\n", b);

    return 0;
}