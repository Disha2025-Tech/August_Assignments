#include <stdio.h>
int main() 
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        if (i % 2 != 0) 
        {
            for (j = 1; j <= i; j++) 
            {
                printf("%d ", j);
            }
        } 
        
        else 
        {
            for (j = 1; j <= i; j++) 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}