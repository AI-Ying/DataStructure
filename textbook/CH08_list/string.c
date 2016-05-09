/*************************************************************************
	> File Name: list1.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月14日 星期一 12时59分02秒
 ************************************************************************/

//
//  main.c
//  HeadInsertAndTailInsert
//
//  Created by chenyufeng on 16/2/25.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100


typedef struct link
{
	char data;
    int length;
    int str[MAXSIZE];
	struct link *next;
}linklist;

linklist *CreateList_Front();	//头插法创建单链表
void ShowLinklist(linklist *h); //输出显示链表
int index(linklist *p, linklist *q);

int main(void)
{
	int choice;
	linklist *p, *q;
/*
	//head = (linklist*)malloc(sizeof(linklist));
	while(1)
	{
		printf("单链表的创建\n");
		printf("1.使用头插法创建单链表\n");
		printf("2.使用尾插法创建单链表\n");
		printf("3.链表输出显示\n");
		printf("4.退出\n");
		printf("做出选择：\n");
		scanf("%d",&choice);
		switch(choice)
		{
		//头插法
		case 1:
			head = CreateList_Front();
			break;
		//尾插法
		case 2:
			head = CreateList_End();
			break;
		//输出链表
		case 3:
			ShowLinklist(head);
			break;
		//退出程序
		case 4:
			return 0;
			break;
		default:
			break;
		}
	}
*/
    p = CreateList_Front();
    ShowLinklist(p);
    q = CreateList_Front();
    ShowLinklist(q);
    printf("index = %d", index(&p, &q));
	return 0;
}

int index(linklist *p, linklist *q)
{
    int i, j, succ;
    i = j = succ = 0;
    while ( (i <= t.length - p)&&(!succ) )
    {
        j = 0;
        succ = 1;
        while ((j<p.length-1) && succ)
        {
            if (p.str[j] == t.str[i+j])
                j++;
            else
                succ = 0;
        }
        ++i;
    }
    if (succ)
        return (i-1);
    else
        return (-1);
}

linklist *CreateList_Front()
{
	linklist *head, *p;
	char ch;
    int length = 0;

	head = NULL;
	printf("输入字符数据(0表示输入结束):\n");
    ch = getchar();
	while(ch != '0')
	{
		p = (linklist*)malloc(sizeof(linklist));
		p->data = ch;
		p->next = head;
		head = p;
		ch = getchar();				//头插法算法简单 核心就两句p->next = head;head = p;
	}
    
    while (p!=NULL)
    {
        length ++;
    }
	return head;

}


/*linklist *CreateList_End()
{
	linklist *head, *p, *e;
	char ch;

	head = NULL;
	e = NULL;
	printf("输入字符数据(0表示输入结束):\n");
    ch = getchar();
	while(ch != '0')
	{
		p = (linklist*)malloc(sizeof(linklist));
		p->data = ch;
		if(head == NULL)		//先判断输入的是不是第一个节点
		{
			head = p;			
		}
		else
		{
			e->next = p;		//e始终指向输入的最后一个节点
		}
		e = p;
		ch = getchar();			
	}
	if(e != NULL)				//如果链表不为空，则最后节点的下一个节点为空
	{
		e->next = NULL;
	}
	return head;				//尾插法比头插法复杂一些，程序中要做两次判断，分别是判断第一个节点和最后一个节点的判断。且消耗多一个指针变量e。
}
*/
void ShowLinklist(linklist *h)
{
	linklist *p;

	p = h;
	while(p != NULL)
	{
		printf("%c ", p->data);
		p = p->next;
	}
	printf("\n");
}


