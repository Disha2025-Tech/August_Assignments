#include <stdio.h>
int main()
{
    int a, b, i, c=1;
    printf("Enter base number: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    //a*a*a

    for(i=1; i<=b; i++)
        {
          c = c * a;
        }

    printf("%d\n", c);

    return 0;
}