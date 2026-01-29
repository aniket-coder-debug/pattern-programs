#include<stdio.h>
#define MAX 6

int main(void)
{
    int arr[MAX][MAX] = {0};
    int i;
    int j = 0;
    int iPlus = 0;
    int iTemp = MAX;
    int iIndex = 0;

    while (1)
    {
        if(iIndex == iTemp - 1 || iIndex == iTemp)
        {
            arr[iIndex][iTemp - 1] = ++iPlus;
            break;
        }
            
        for(i = iIndex; i < iTemp - 1; i++)
        {
            if(j == iIndex)
            {
                for(j = iIndex; j < iTemp; j++)
                    arr[i][j] = ++iPlus;
            }

            for(j = iTemp - 1; j < iTemp; j++)
                arr[i + 1][j] = ++iPlus;
            
        }

        for(i = iTemp - 1; i > iIndex + 1; i--)
        {
            if(j == iTemp)
            {
                for(j = i - 1; j >= iIndex; j--)
                    arr[i][j] = ++iPlus;
            }

            for(j = iIndex; j >= iIndex; j--)
                arr[i - 1][j] = ++iPlus;
        }

        --iTemp;
        ++iIndex;
        j = iIndex;
    }

    for(i = 0 ; i < MAX ; i++)
    {
        for(j = 0; j < MAX; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }

    return 0;
}
