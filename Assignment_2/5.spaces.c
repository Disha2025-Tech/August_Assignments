#include <stdio.h>
int main() 
{
    char str[200];
    int i, spaces = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ')
            spaces++;
    }

    printf("Number of spaces: %d", spaces);

    return 0;
}

/*
OUTPUT

Enter a sentence: In my company
Number of white spaces: 2
*/