#include <stdio.h>
int main() {
    int n, i, num;
    int min1, min2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    min1 = num;

    printf("Enter number 2: ");
    scanf("%d", &num);
    if (num < min1) {
        min2 = min1;
        min1 = num;
    } else {
        min2 = num;
    }

    for (i = 3; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < min1) {
            min2 = min1;
            min1 = num;
        } 
        else if (num < min2 && num != min1) {
            min2 = num;
        }
    }

    printf("The second minimum number is: %d\n", min2);

    return 0;
}
