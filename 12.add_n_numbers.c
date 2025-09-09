#include<stdio.h>
int main()

{
int n, i, a, b=0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
      { 
        printf("Enter a number:");
        scanf("%d",&a);
        
        b+=a;
      }

    printf("Addition of the numbers is %d", b);  

    return 0;
}