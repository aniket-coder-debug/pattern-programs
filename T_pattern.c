#include<stdio.h>

int main(void)
{
    int iNo;
    int i,j;

    printf("Enter Any Number:-\t");
    scanf("%d",&iNo);


    for(i = 0; i < iNo; i++)
    {
        if(i == 0)
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

    return 0;
}
