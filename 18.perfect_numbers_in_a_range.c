#include <stdio.h>
int main() 
{
    int start, end, num, i, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    if (start <= 0) start = 1;

    printf("Perfect numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) 
    {
        sum = 0;
        for (i = 1; i <= num / 2; i++) 
        {
            if (num % i == 0) 
            {
                sum += i;
            }
        }
        if (sum == num && num != 0) 
        {
            printf("%d\n", num);
        }
    }

    return 0;
}