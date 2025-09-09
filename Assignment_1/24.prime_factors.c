#include <stdio.h>
int main()
{
    int n, i, j, a;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            a=1;
    
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                a=0;
                break;
            }
        }

        if(a==1) {printf("%d\n", i);}
        }
    }    

    return 0;
}