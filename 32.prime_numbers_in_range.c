#include <stdio.h>
int main() 
{
    int a, b, c, d, e;

    printf("Enter starting number: ");
    scanf("%d", &a);

    printf("Enter ending number: ");
    scanf("%d", &b);

    for (c = a; c <= b; c++) 
    {
        if (c < 2) 
            continue;

        e = 1;
        for (d = 2; d <= c / 2; d++) 
        {
            if (c % d == 0) 
            {
                e = 0;
                break;
            }
        }

        if (e == 1)
            printf("%d\n", c);
    }

    return 0;
}