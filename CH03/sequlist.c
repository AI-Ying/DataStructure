#include "sequlist.h"
#include <stdio.h>
#include <stdlib.h>

void initsequlist(sequence_list *L)
{
    L->size = 0;
}

void input(sequence_list *L)
{
    datatype x;
    initsequlist(L);
    printf("Please input numbers:\n");
    scanf("%d", &x);
    while (x)
    {
        L->a[L->size++] = x;
        scanf("%d", &x);
    }
}

void inputfromfile (sequence_list *L, char *f)
{
    int i, x;
    FILE *fp = fopen(f, "r");
    if (fp)
    {
        while ( !feof(fp))
        {
            fscanf(fp, "%d", &L->a[L->size++]);
        }
        fclose(fp);
    }
}

void print(sequence_list *L)
{
    int i;
    for (i=0; i<L->size; i++)
    {
        printf("%5d", L->a[i]);
        if ((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

void reverse(sequence_list *L)
{
    int i , x, j= 0;
    for (i=0; i<L->size/2; i++)
    {
        x = L->a[i];
        L->a[i] = L->a[L->size-1-j];
        L->a[L->size-1-j] = x;
        j++;
    }
}

void sprit(sequence_list *L1, sequence_list *L2, sequence_list *L3)
{
    int i;
    L2->size = 0;
    L3->size = 0;
    for (i=0; i<L1->size; i++)
    {
        if (L1->a[i]%2 == 0)
        {
            L2->a[L2->size++] = L1->a[i];
        }
        else if (L1->a[i]%2 != 0)
        {
            L3->a[L3->size++] = L1->a[i];
        }
    }
}



void merge(sequence_list *L1, sequence_list *L2, sequence_list *L3)
{
    int i, j, k;
    L3->size = L1->size + L2->size;
    for (j=0; j < L2->size; j++ )
    {
        for (i = 0; i < L1->size; i++)
        {
            if (L1->a[i] <= L2->a[j])
            {
                L3-a[size++] = L1->a[i];
                
            }
        }
    }
}


