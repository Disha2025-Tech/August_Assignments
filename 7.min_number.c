#include <stdio.h>
int main()
{
    float a, b;

    printf("Enter 1st number: ");
    scanf("%f", &a);

    printf("Enter 2nd number: ");
    scanf("%f", &b);

    if(a>b) {printf("2nd number is minimum\n");}
    else if(a==b) {printf("Both are equal\n");}
    else printf("1st number is munimum\n");

    return 0;
}