#include <stdio.h>
int main()
{
    int n, i, a, b;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    {printf("Enter a number: ");
    scanf("%d", &b);


    for(i=2; i<=n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a);


        if (a>b) {b=a;}
        else {b=b;}
    }

}

    printf("The maximum number is %d",b);

    return 0;


}