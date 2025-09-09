#include <stdio.h>
int main()
{
    int n, i, x=97;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%c ", x);
        x=x+2;
        
    }

    printf("\n");

    return 0;
}