#include <stdio.h>

int main() 
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Output: ");

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'b' && str[i] <= 'y') 
        {
            printf("%c", str[i]);
        } else if (str[i] == ' ') 
        
        {
            printf(" ");
        } 
        
        else 
        {
            while (str[i] != ' ' && str[i] != '\0') 
            {
                i++;
            }
            if (str[i] == ' ') 
            {
                printf(" ");
            }
        }
    }

    return 0;
}

/*
OUTPUT

Enter a string: mn jn kn kazfd
Output: mn jn kn k
*/
