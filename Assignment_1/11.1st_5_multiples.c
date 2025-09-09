#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=n; i<=n*5; i+=n)
    {
        printf("%d\n",i);
    }

    return 0;
}