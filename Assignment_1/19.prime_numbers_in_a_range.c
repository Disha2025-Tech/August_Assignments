#include <stdio.h>
int main()
{
    int start, end, num, i, prime;

    printf("Starting number: ");
    scanf("%d", &start);

    printf("Ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) 
    {
        prime = 1;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) 
            {
                prime = 0;
                break;
            }
        }

    if (prime==1) 
    {
       printf("%d\n", num);
    }

    }  
    

    return 0;
}