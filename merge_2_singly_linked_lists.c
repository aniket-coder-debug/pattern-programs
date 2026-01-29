#include<stdio.h>
#include<malloc.h>

struct node
{
    int iNo;
    struct node *pNext;
};

void InsertFirst(struct node **ppHead,int iNo);
void Display(struct node *pHead);
int CountNodes(struct node *pHead);
void DeleteAll(struct node **ppHead);
void ConcatLists(struct node **ppHead1,struct node **ppHead2);
void Sort(struct node **ppHead);

int main(void)
{
    struct node *pFirst = NULL;
    struct node *pSecond = NULL;

    InsertFirst(&pFirst,10);
    InsertFirst(&pFirst,20);
    InsertFirst(&pFirst,30);

    Display(pFirst);

    InsertFirst(&pSecond,80);
    InsertFirst(&pSecond,10);
    InsertFirst(&pSecond,70);
    InsertFirst(&pSecond,40);

    Display(pSecond);

    ConcatLists(&pFirst,&pSecond);
    Display(pFirst);
    Display(pSecond);

    Sort(&pFirst);
    Display(pFirst);

    if(pFirst != NULL)
    {
        DeleteAll(&pFirst);
        pFirst = NULL;
    }

    if(pSecond != NULL)
    {
        DeleteAll(&pSecond);
        pSecond = NULL;
    }

    Display(pFirst);
    Display(pSecond);

    return 0;

}

void InsertFirst(struct node **ppHead,int iNo)
{
    struct node *pNewNode = NULL;

    pNewNode = (struct node*)malloc(sizeof(struct node));
    if(NULL == pNewNode)
    {
        printf("Memory Allocation Failed\n");
        return;
    }

    pNewNode->iNo = iNo;

    if(*ppHead == NULL)
        pNewNode->pNext = NULL;
    else
        pNewNode->pNext = *ppHead;

    *ppHead = pNewNode;
}

void Display(struct node *pHead)
{
    if(NULL == pHead)
    {
        printf("\nList is Empty\n");
        return;
    }

    printf("\nList is:-\t");
    while(pHead != NULL)
    {
        printf("|%d|->",pHead->iNo);
        pHead = pHead->pNext;
    }
}

void DeleteAll(struct node **ppHead)
{
    struct node *pTemp = NULL;

    while(*ppHead != NULL)
    {
        pTemp = *ppHead;
        *ppHead = pTemp->pNext;
        free(pTemp);
    }
}

void ConcatLists(struct node **ppHead1,struct node **ppHead2)
{
    struct node *pTemp = NULL;

    if(*ppHead2 == NULL)
        return;

    if(*ppHead1 == NULL)
    {
        *ppHead1 = *ppHead2;
        *ppHead2 = NULL;
        return;
    }

    pTemp = *ppHead1;

    while(pTemp->pNext != NULL)
        pTemp = pTemp->pNext;

    pTemp->pNext = *ppHead2;
    *ppHead2 = NULL;

}

void Sort(struct node **ppHead)
{
    struct node *pTemp1 = NULL;
    struct node *pTemp2 = NULL;
    struct node *pTemp4 = NULL;

    if(NULL == *ppHead)
    {
        printf("\nList is Empty\n");
        return;
    }

    pTemp1 = *ppHead;

    while(pTemp1 != NULL)
    {
        pTemp2 = pTemp1->pNext;

        while(pTemp2 != NULL)
        {
            if(pTemp1->iNo > pTemp2->iNo)
            {
                pTemp4 = *ppHead;

                if(pTemp1 != pTemp4)
                {
                    while(pTemp4->pNext != pTemp1)
                        pTemp4 = pTemp4->pNext;
                }

                if(pTemp1->pNext != pTemp2)
                {
                    while(pTemp1->pNext != pTemp2)
                        pTemp1 = pTemp1->pNext;
                }

                if((pTemp4->pNext == pTemp1 && pTemp1->pNext == pTemp2) || (pTemp1->pNext->pNext == NULL))
                {
                    pTemp1->pNext = pTemp2->pNext;

                    if(pTemp4 == *ppHead)
                        pTemp2->pNext = pTemp4;
                    else
                        pTemp2->pNext = pTemp4->pNext;

                    if(pTemp4 != *ppHead)
                        pTemp4->pNext = pTemp2;
                }
                else
                {
                    pTemp1->pNext = pTemp2->pNext;
                    pTemp2->pNext = pTemp4;
                }

                if(*ppHead == pTemp4)
                    *ppHead = pTemp2;

                pTemp1 = pTemp2;
            }

            pTemp2 = pTemp2->pNext;
        }

        pTemp1 = pTemp1->pNext;
    }

}
