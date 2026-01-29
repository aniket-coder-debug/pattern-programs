#include<stdio.h>
#define MAX 10

int main(void)
{
    int iTemp;
    int arr[MAX][MAX] = {0};
    int iPlus = 99;
    int i,j;

    for(i = 0; i <= MAX - 1; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 0; j <= i; j++)
                arr[i-j][j] = ++iPlus;
        }
        else
        {
            for(j = i; j >= 0; j--)
                arr[i-j][j] = ++iPlus;
        }
    }

    for(i = 1; i <= MAX - 1; i++)
    {
        if(i % 2 == 1)
        {
            iTemp = i;
            for(j = MAX - 1; j >= i; j--)
                arr[iTemp++][j] = ++iPlus;
        }
        else
        {
            iTemp = MAX;
            for(j = i; j <= MAX - 1; j++)
                arr[--iTemp][j] = ++iPlus;

        }
    }

    for(i = 0; i <= MAX - 1; i++)
    {
        for(j = 0; j <= MAX - 1; j++)
            printf("%d ",arr[i][j]);

        printf("\n");
    }

    return 0;
}
