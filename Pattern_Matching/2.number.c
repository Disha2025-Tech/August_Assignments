#include <stdio.h>
int main()
{
    int n, i;
    char c='1';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%c ", c);
    }

    printf("\n");

    return 0;
}