#include<stdio.h>

int main(void)
{
    int iDigit;
    int iRev = 0;
    int iNo = 1234;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

    printf("\nOrignal Number is %d\n",iNo);
    printf("\nReverse Number is %d\n",iRev);

    return 0;
}