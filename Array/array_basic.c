#include <stdio.h>
int main()
{
    int x[5]= {0,1,2,3,4};
    char ch[5]= {'a','e','i','o','u'};
    char y[5][20]= {"Hii","How","Are", "You", "?"};

    printf("%d %d %d %d %d\n", x[0], x[1], x[2], x[3], x[4]);
    printf("%c\n", ch[3]);
    printf("%s\n", y[0]);

    return 0;
}