/*************************************************************************
	> File Name: stack.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月28日 星期一 12时29分24秒
 ************************************************************************/

#include "stack.h"

void init(Stack *s)
{
    s->top = -1;
}

int empty(Stack *s)
{
    return s->top == -1;
}

void push(Stack *s, datatype x)
{
    if (s->top==MaxSize-1)
    {
        printf("Stack overflow!\n");
        exit(1);
    }
    ++s->top;
    s->a[s->top] = x;
}

int pop(Stack *s)
{
    if (empty(s))
    {
        printf("stack underflow!\n");
        exit(1);
    }
    return s->a[s->top--];
}

void conversion(long num, int N)
{
    Stack s;
    int k, x;
    init(&s);
    while (num)
    {
        k = num % N;
        push(&s, k);
        num = num/N;
    }
    printf("\n");
    while (!empty(&s))
    {
        x = pop(&s);
        printf("%d", x);
    }
    printf("\n");
}


