#include <stdio.h>
int main() 
{
    int a, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    while (a != 0) 
    {
        c = a % 10;
        if (b % 2 == 0) 
        {
            printf("%d\n", c);
        }
        a = a / 10;
        b++;
    }

    return 0;
}