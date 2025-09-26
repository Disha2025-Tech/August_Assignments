#include <stdio.h>
int main() 
{
    char str[200];
    int i, small = 0, capital = 0, digit = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            small++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            capital++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
    }

    printf("Small:%d Capital:%d Digits:%d", small, capital, digit);

    return 0;
}

/*
OUTPUT

Enter a sentence: abcDE 5Glm1 O
Small:5 Capital:4 Digits:2
*/