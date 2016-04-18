/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月28日 星期一 12时40分49秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
    long num;
    int N;
    printf("Input the num and N:");
    scanf("%ld, %d", &num, &N);
    conversion(num, N);
    return 0;
}
