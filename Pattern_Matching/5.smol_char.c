#include <stdio.h>
int main()
{
    int n, i;
    char c='a';

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%c ", c);
        
    }

    printf("\n");

    return 0;
}