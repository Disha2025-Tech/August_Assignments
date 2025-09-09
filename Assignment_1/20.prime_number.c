#include <stdio.h>
int main()
{
    int n, i, p=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=n/2; i>=1; i--)
    {
        if(n%i==0)
        {
            printf("Number is not prime\n");
            break;
        }

        else printf("Number is prime\n");
    }

    return 0;
}