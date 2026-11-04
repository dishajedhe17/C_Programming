#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal, int iObtained)
{
    float fAns = 0.0;

    if(iTotal == 0)
    {
        return 0.0;
    }

    fAns = ((float)iObtained / iTotal) * 100;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is: %.1f%%\n",fRet);

    return EXIT_SUCCESS;
}