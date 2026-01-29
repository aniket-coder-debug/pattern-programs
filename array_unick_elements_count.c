#include<stdio.h>
#define MAX 6

int UnickElementCount(int[]);

int main(void)
{
    int arr[MAX] = {0};
    int iCounter;

    for(iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("Enter arr[%d] value:-\t",iCounter);
        scanf("%d",&arr[iCounter]);
    }

    printf("\nArray elements are:-\t");
    for(iCounter = 0; iCounter < MAX; iCounter++)
        printf("%d ",arr[iCounter]);

    printf("\n");

    iCounter = UnickElementCount(arr);
    if(iCounter != 0)
        printf("\nTotal Unick elements Count is %d\n",iCounter);
    
        return 0;
}

int UnickElementCount(int pArr[])
{
    int Arr[MAX] = {0};
    int i,j,iCount = 0;

    for(i = 0; i < MAX; i++)
        Arr[i] = pArr[i];

    for(i = 0; i < MAX; i++)
    {
        for(j = i + 1; j < MAX; j++)
        {
            if(Arr[i] == Arr[j])
                Arr[j] = 0;
        }
    }

    for(i = 0; i < MAX; i++)
    {
        if(Arr[i] > 0)
            ++iCount;
    }

    return iCount;
}