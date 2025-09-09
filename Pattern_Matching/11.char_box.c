#include <stdio.h>
int main()
{
    int r, c, i, j;
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
        printf("%c ", ch);
        }

        printf("\n");
    }


    return 0;
}