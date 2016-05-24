/*************************************************************************
	> File Name: list.c
	> Author: 
	> Mail: 
	> Created Time: 2016年05月23日 星期一 17时33分15秒
 ************************************************************************/
#include <stdio.h>
#include "list.h"

/*
 *Setting the list is empty
 */
List MakeEmpty( List L )
{
    return NULL;
}

/*
 * if the list is empty, return 1, not, return 0
 */
int IsEmpty ( List L )
{
    return L->Next == NULL;
}

/* Return true if P is the last Position in list L
 * Parameter L is unused in this implementation
 */
int IsLast( Position P, List L )
{
    return P->Next == NULL;
}

/* 
 * Return Position of X in L; NULL if not found
 */
Position Find( ElementType X, List L )
{
    Position P;
    P = L->Next;
    while ( P != NULL && P->Element != X )
        P = P->Next;
    return P;
}

/*
 *
 */
Position FindPrevious( ElementType X, List L )
{
    Position P;
    P = L->Next;
    while ( P->Next != NULL && P->Next->Element != X )
        P = P->Next;
    return P;
}


/*
 *
 */
void Delete( ElementType X, List L )
{
    Position P, TmpCell;
    P = FindPrevious(X, L);
    if ( !IsEmpty(P, L) )
    {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free( TmpCell );
    }

}





int main()
{
    return 0;
}
