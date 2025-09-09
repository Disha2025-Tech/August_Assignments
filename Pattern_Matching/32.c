#include <stdio.h>
int main() 
{
    int rows, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        num = i * 10;
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}