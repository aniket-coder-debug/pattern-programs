#include<stdio.h>

int main(void)
{
    int iNo;
    int iTemp;
    int i,j;

    printf("\nEnter Any Number:-\t");
    scanf("%d",&iNo);

    printf("\n");

    for(i = 0; i < iNo; i++)
    {
        if(i == 0 || i == iNo - 1)
        {
            for(j = 0; j < iNo; j++)
                printf("* ");
        }
        else
        {
            for(j = 0; j < iNo / 2; j++)
                printf("  ");

            printf("* ");
        }

        printf("\n");
        
    }

    printf("\n");

    iTemp = iNo + 1;
    for(i = 0; i <= iNo; i++)
    {
        if(i == 0)
        {
            for(j = 0; j <= iTemp; j++)
            {
                if(j == 0 || j == iTemp / 2 || j == iTemp)
                    printf("  ");
                else
                    printf("* ");
            }
        }        
        else if(i == 1 || i == 2)
        {
            for(j = 0; j <= iTemp; j++)
                printf("* ");
        }
        else
        {
            for(j = 0; j < iTemp; j++)
            {
                if(j < i - 2)
                    printf("  ");
                else
                    printf("* ");
            }
            --iTemp;
        }

        printf("\n");
    }

    for(i = 0; i < iNo; i++)
    {
        if(i != iNo - 1)
        {
            for(j = 0; j < iNo; j++)
            {
                if(j == 0 || j == iNo - 1)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        else
        {
            for(j = 0; j < iNo; j++)
                printf("* ");
        }

        printf("\n");
    }

    return 0;
}