#include <stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;

    i = 5;

    while (i > 0)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}
