/*************************************************************************
	> File Name: list.h
	> Author: 
	> Mail: 
	> Created Time: 2016年05月23日 星期一 17时20分28秒
 ************************************************************************/

#ifndef _LIST_H
#define _LIST_H

struct Node;
typedef int ElementType;
typedef struct Node *PtrToNode;
typedef struct PtrToNode List;
typedef struct PtrToNode Position;

List MakeEmpty( List L );
int IsEmpty( List L );
int IsLast( Position P, List L );
Position Find( ElementType X, List L );
void Delete( ElementType X, List L );
Position FindPrevious( ElementType X, List L );
void Insert( ElementType X, List L, Position P );
void DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( Position P );
ElementType Retrieve( Position P );


struct Node
{
    ElementType Element;
    Position Next;
}


#endif

