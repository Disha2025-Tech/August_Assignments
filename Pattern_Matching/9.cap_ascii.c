#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if(n>26){n=26;}
    if(n<=0) {printf(" ");}

    for(i=65; i<=64+n; i++)
    {
        printf("%c ", i);
        
    }

    printf("\n");

    return 0;
}