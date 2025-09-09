#include <stdio.h>
int main()
{
    int n, i;
    char c='*';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%c ", c);
    }

    printf("\n");

    return 0;
}