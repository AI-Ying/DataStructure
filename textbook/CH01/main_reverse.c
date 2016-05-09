/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月20日 星期日 12时47分46秒
 ************************************************************************/

#include <stdio.h>
#include "sequlist.h"
#include <stdlib.h>

int main()
{
    sequence_list L1, L2, L3;
    input(&L1);
    print(&L1);
    reverse(&L1);
    print(&L1);
    
    return 0;
}
