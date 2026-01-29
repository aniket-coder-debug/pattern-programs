#include<stdio.h>
#define MAX 5

int FindLargeElement(int *pArr);

int main(void)
{
    int Arr[MAX] = {0};
    int iCounter;

    for(iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("\nEnter Arr[%d] value:-\t",iCounter);
        scanf("%d",&Arr[iCounter]);
    }

    printf("\nArray values are:-\t");
    for(iCounter = 0; iCounter < MAX; iCounter++)
        printf("%d ",Arr[iCounter]);

    iCounter = FindLargeElement(Arr);
    printf("\n\nLargest Element is %d\n",iCounter);

    printf("\nArray values are:-\t");
    for(iCounter = 0; iCounter < MAX; iCounter++)
        printf("%d ",Arr[iCounter]);

    return 0;
}

int FindLargeElement(int *pArr)
{
    int iCounter = 0;
    int iTemp;

    iTemp = pArr[iCounter];
    for(iCounter = 0; iCounter < MAX - 1; iCounter++)
    {
        if(iTemp < pArr[iCounter + 1])
            iTemp = pArr[iCounter + 1];
    }

    return iTemp;
}
