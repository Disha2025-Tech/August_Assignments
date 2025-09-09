#include <stdio.h>
int main() {
    int n, i, num;
    int max1, max2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    max1 = num;

    printf("Enter number 2: ");
    scanf("%d", &num);
    if (num > max1) {
        max2 = max1;
        max1 = num;
    } else {
        max2 = num;
    }

    for (i = 3; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max1) {
            max2 = max1;
            max1 = num;
        } 
        else if (num > max2 && num != max1) {
            max2 = num;
        }
    }

    printf("The second maximum number is: %d\n", max2);

    return 0;
}
