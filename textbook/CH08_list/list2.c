#include<stdio.h>
#include<stdlib.h>
//链表存储结构
typedef struct Node
{
	int number;
	struct Node * next;
}Node;
typedef struct Node * LinkList;

void createListHead(LinkList * pHead, int option) //形参pHead为指向指针的指针 
{
	LinkList p, r;
	int i;
	*pHead = (LinkList)malloc(sizeof(Node));   //头结点，不存数据 
	r = *pHead;
	if (option == 1)  //生成奇数递增链表
	{
		for (i = 1; i < 11; i += 2)
	    {
			p = (LinkList)malloc(sizeof(Node));
			p->number = i;
			r->next = p;
			r = p;
	    }	
	} 
	else if (option == 2)   //生成偶数递增链表 
	{
		for (i = 2; i < 10; i += 2)
	    {
			p = (LinkList)malloc(sizeof(Node));
			p->number = i;
			r->next = p;
			r = p;
	    }		
	} 

	r->next = NULL;
}    

void displayElem(LinkList pHead)
{
	while (pHead)
	{
		printf("%d\t", pHead->number);
		pHead = pHead->next;	
	}
	printf("\n");
}

LinkList mergedList(LinkList pHead1, LinkList pHead2)
{
	LinkList pHead = NULL;
	if (pHead1 == NULL)
	{
		return pHead2;	
	}
	else if (pHead2 == NULL)
	{
		return pHead1;	
	}
	
	if (pHead1->number < pHead2->number)
	{
		pHead = pHead1;
		pHead->next = mergedList(pHead1->next, pHead2);	
	}
	else
	{
		pHead = pHead2;
		pHead->next = mergedList(pHead1, pHead2->next);	
	}
	return pHead;
	
}
int main()
{
	LinkList pHead1 = NULL;
	LinkList pHead2 = NULL;
	LinkList pHead = NULL;
	createListHead(&pHead1, 1);   /*传入指针本身的地址，这里读者得好好想想，为什么这样 
	                               *相当于是传入pHead1这个指针本身的地址，然后在
								   *createListHead函数中操纵这个指针pHead1,让它有指向
								   */ 
	createListHead(&pHead2, 2); 
	displayElem(pHead1->next);
	displayElem(pHead2->next);    //pHead1和pHead2就是两个排好序的链表 
	
	//下面要将这两个排好序的链表组合成一个有序的递增链表 
	pHead = mergedList(pHead1->next, pHead2->next);
	displayElem(pHead);
	return 0;
}
