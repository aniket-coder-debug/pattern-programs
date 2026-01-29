#include <stdio.h>

#define MAX 7
void Sort(int *pArr , int iCount);
int main(void)
{
	int Arr[] = {4, 5, 4, 7, 4, 267, 4};
	
	for(int i = 0; i < MAX; i++)
	{
		printf("%d ",Arr[i]);
	}
	printf("\n");
	Sort(Arr , MAX);
	for(int i = 0; i < MAX; i++)
	{
		printf("%d ",Arr[i]);
	}
	printf("\n");
	return 0;
}

void Sort(int *pArr , int iCount)
{
    int i;
    int iNo = 0;
    int iTemp;

    for(i = 0; i < iCount ; i++)
    {
        if(pArr[i] == 4)
        {
            iTemp = pArr[iNo];
            pArr[iNo] = pArr[i];
            pArr[i] = iTemp;

            iNo++;
        }
    }
}
