#include <stdio.h>
int main()
{
    int n, a=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(int i=n; i>=1; i--)
    {
        a=a*i;
    }

    printf("Factorial=%d", a);

    return 0;
}