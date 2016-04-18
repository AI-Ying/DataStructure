/*************************************************************************
	> File Name: queue.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月28日 星期一 17时24分22秒
 ************************************************************************/

#include "queue.h"

void init(queue *q)
{
    q->front = q->rear = 0;
}

void input(queue *q)
{
    int x;
    printf("Please input the number:");
    scanf("%d", &x);
    while (x)
    {
        q->a[q->rear] = x;
        q->rear = (q->rear+1)%MAXSIZE;
        scanf("%d", &x);
    }

}

void display(queue q)
{
    int i;
    for (i=q.front; i != q.rear; i=(i+1)%MAXSIZE)
    {
        printf("%5d", q.a[i]);
    }
    printf("\n\n");
}
