#include <stdio.h>
int main()
{
    int n, i, x=1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d ", x);
        x+=2;
    }

    printf("\n");

    return 0;
}