#include <stdio.h>
int main() 
{
    char str[200];
    int i, length = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != '\n')
            length++;
    }

    printf("Length of sentence: %d", length);

    return 0;
}

/*
OUTPUT

Enter a sentence: India is my
Length of sentence: 11
*/