#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct ListNode
{
	int val;
	ListNode* next;
} ListNode;



void addNode(ListNode** pHead, int value);

void removeNode(ListNode** pHead);



#endif