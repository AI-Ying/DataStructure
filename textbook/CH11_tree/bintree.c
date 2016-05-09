/*************************************************************************
	> File Name: bittree.c
	> Author: 
	> Mail: 
	> Created Time: 2016年05月09日 星期一 17时09分09秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
typedef char datatype;
typedef struct node
{
    datatype data;
    struct node *lchild, *rchild;
}bintnode;
typedef bintnode *bintree;

//stack
typedef struct stack
{
    bintree data[100];
    int tag[100];
    int top;
}seqstack;

void push(seqstack *s, bintree t)
{
    s -> data[s->top] = t;
    s -> top++;
}

bintree pop (seqstack *s)
{
    if (s -> top != 0)
    {
        s -> top --;
        return (s -> data[s -> top]);
    }
    else
    {
        return NULL;
    }
}

void inorder1(bintree t)
{
    seqstack s;
    s.top = 0;
    while ( (t != NULL) || (s.top != 0) )
    {
        if (t)
        {
            push(&s, t);
            t = t -> lchild;
        }
        else 
        {
            t = pop(&s);
            printf("%3c-", t -> data);
            t = t -> rchild;
        }
    }
}

bintree createbintree()
{
    char ch;
    bintree t;
    if ( (ch = getchar()) == '#' )
    {
        t = NULL;
    }

    else
    {
        t = (bintnode *)malloc(sizeof(bintnode));
        t -> data = ch;
        t -> lchild = createbintree();
        t -> rchild = createbintree();
    }
    return t;
}

void preorder(bintree t)
{
    if (t)
    {
        printf("%c--", t->data);
        preorder(t -> lchild);
        preorder(t -> rchild);
    }
}



int main()
{
    bintnode *t;
    t = createbintree();
    printf("non-recursive:\n");
    preorder(t);
    printf("\nirecursive:\n");
    inorder1(t);
    printf("\n");
    return 0;
}
