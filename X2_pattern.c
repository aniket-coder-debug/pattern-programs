#include<stdio.h>

int main(void)
{
    int iNo;
    int i,j;

    printf("\nEnter Any Number:-\t");
    scanf("%d",&iNo);

    for(i = 0; i < iNo; i++)
    {
        if(i <= iNo / 2)
        {
            for(j = 0; j < iNo; j++)
            {
                if(j >= i && j <= (iNo - 1)- i)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        else
        {
            for(j = 0; j < iNo; j++)
            {
                if(j <= i && j >= (iNo - 1)- i)
                    printf("* ");
                else
                    printf("  ");
            }
        }

        printf("\n");
    }
    
    return 0;
}