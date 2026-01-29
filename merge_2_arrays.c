#include<stdio.h>
#define MAX 10

int main(void)
{
    int Arr1[MAX] = {0};
    int Arr2[MAX] = {0};
    int Arr3[MAX] = {0};
    int iNoOfElements1;
    int iNoOfElements2;
    int i;
    int iTemp;

    printf("\nHow many you want to first array elements? (0<5)\t");
    scanf("%d",&iNoOfElements1);

    printf("\n");
    for(i = 0; i < iNoOfElements1; i++)
    {
        printf("Enter arr1[%d] =\t",i);
        scanf("%d",&Arr1[i]);
    }

    printf("\nHow many you want to second array elements? (0<5)\t");
    scanf("%d",&iNoOfElements2);

    printf("\n");
    for(i = 0; i < iNoOfElements2; i++)
    {
        printf("Enter arr2[%d] =\t",i);
        scanf("%d",&Arr2[i]);
    }

    iTemp = iNoOfElements1 + iNoOfElements2;

    printf("\n\nArr1 Values are:-\t");
    for(i = 0; i < iNoOfElements1; i++)
        printf("%d ",Arr1[i]);

    printf("\n\nArr2 Values are:-\t");
    for(i = 0; i < iNoOfElements2; i++)
        printf("%d ",Arr2[i]);

    for(i = 0; i < iNoOfElements1; i++)
        Arr3[i] = Arr1[i];      

    for(i = 0; i < iNoOfElements2; i++)
        Arr3[iNoOfElements1++] = Arr2[i];

    printf("\n\nArr3 Values are:-\t");
    for(i = 0; i < iTemp; i++)
        printf("%d ",Arr3[i]);


    for(i = 0; i < iTemp - 1; i++)
    {
        for(iNoOfElements1 = i + 1; iNoOfElements1 < iTemp; iNoOfElements1++)
        {
            if(Arr3[i] > Arr3[iNoOfElements1])
            {
                iNoOfElements2 = Arr3[i];
                Arr3[i] = Arr3[iNoOfElements1];
                Arr3[iNoOfElements1] = iNoOfElements2;
            }
        }
    }

    printf("\n\nSorted Elements are:-\t");
    for(i = 0; i < iTemp; i++)
        printf("%d ",Arr3[i]);

    printf("\n");

    return 0;
}
