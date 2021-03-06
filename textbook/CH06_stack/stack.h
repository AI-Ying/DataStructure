/*************************************************************************
	> File Name: stack.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月28日 星期一 12时22分20秒
 ************************************************************************/

#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef int datatype;
typedef struct
{
    datatype a[MaxSize];
    int top;
}Stack;

void init(Stack *s);
int empty(Stack *s);
void push(Stack *s, datatype x);
int pop (Stack *s);
void conversion(long num, int N);

#endif
