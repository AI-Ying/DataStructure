/*************************************************************************
	> File Name: queue.h
	> Author: 
	> Mail: 
	> Created Time: 2016年03月28日 星期一 17时12分52秒
 ************************************************************************/

#ifndef _QUEUE_H
#define _QUEUE_H
#include <stdio.h>
#define MAXSIZE 100
typedef int datatype;
typedef struct queue
{
    datatype a[MAXSIZE];
    int front;
    int rear;
}queue;

void init(queue *q);
void display(queue q);
void input(queue *q);

#endif
