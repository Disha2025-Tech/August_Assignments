#include <stdio.h>
int main() 
{
    int rows, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        num = 1;
        for (j = 1; j <= i; j++) {
            if (j % 2 != 0) 
            {
                printf("%d ", num);
                num += 2;
            } 
            
            else 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}