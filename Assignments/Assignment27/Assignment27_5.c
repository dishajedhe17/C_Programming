#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    if (str == NULL)
    {
        return;
    }

    while (*end != '\0')
    {
        end++;
    }

    while (end > start)
    {
        end--;
        printf("%c", *end);
    }
    printf("\n");
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    Reverse(arr);
    
    return 0;
}