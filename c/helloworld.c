#include <stdio.h>

#define NUMBER_OF_STRINGS 2

int main()
{
    char *strings[NUMBER_OF_STRINGS] = {"Hello", "World!"};
    int i = 0;

    for (i = 0; i < NUMBER_OF_STRINGS; i++)
    {
        printf("%s ", strings[i]);
    }
    printf("\n");

    return 0;
}
