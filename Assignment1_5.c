#include <stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }

}

int main()
{
    int Value = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    Accept(Value);

    return EXIT_SUCCESS;
}