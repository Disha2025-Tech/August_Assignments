#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i=97; i<=96+n; i++)
    {
        printf("%c ", i);
        
    }

    printf("\n");

    return 0;
}