#include<stdio.h>

int main(void)
{
    int iNo;
    int i;
    int j;

    printf("\nEnter any Number:\t");
    scanf("%d",&iNo);

    for(i = 0; i < iNo; i++)
    {
        for(j = 0; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
