#include<stdio.h>

int OddNumberCheck(int iNo);
int EvenNumberCheck(int iNo);

int main(void)
{
    int iNo , iRet;

    printf("\nEnter any Number:-\t");
    scanf("%d",&iNo);

    iRet = OddNumberCheck(iNo);
    if(iRet == 1)
        printf("\n%d is Odd Number\n",iNo);
    else
        printf("\n%d is Not Odd Number",iNo);

    iRet = EvenNumberCheck(iNo);
    if(iRet == 1)
        printf("\n%d is Even Number\n",iNo);
    else
        printf("\n%d is Not Even Number",iNo);

    return 0;
}

int OddNumberCheck(int iNo)
{
    int iTemp = 1;

    if(iNo == 1)
        iTemp = 1;
    else if(iNo == 0)
        iTemp = 0;
    else if(iNo % 2 == 0)
        iTemp = 0;

    return iTemp;
}

int EvenNumberCheck(int iNo)
{
    int iTemp = 0;

    if(iNo == 1)
        iTemp = 0;
    else if(iNo == 0)
        iTemp = 1;
    else if(iNo % 2 == 0)
        iTemp = 1;

    return iTemp;
}