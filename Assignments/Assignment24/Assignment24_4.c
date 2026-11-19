#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iPos = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCount;
        }

        iCount++;
        str++;
    }

    return iPos;
}

int main()
{
    char arr[200];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%199[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);
    
    return 0;
}