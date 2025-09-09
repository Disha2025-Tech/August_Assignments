#include <stdio.h>
int main() 
{
    int a, b = 0, c, d;

    printf("Enter a number: ");
    scanf("%d", &a);

    d = a;
    while (d != 0) 
    {
        c = d % 10;
        b = b * 10 + c;
        d = d / 10;
    }

    if (a == b)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}