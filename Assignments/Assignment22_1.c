#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for(i = 1; i <= iNo; i++, ch++)
    {
        printf("%c\t", ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return EXIT_SUCCESS;
}