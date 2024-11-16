#include "LinkedList.h"


void addNode(ListNode** pHead, int value)
{
	ListNode* newNode = new ListNode;
	newNode->val = value;
	newNode->next = *pHead;
	*pHead = newNode;
}

void removeNode(ListNode** pHead)
{
	if (*pHead == nullptr) return ;
	ListNode* deletedNode = *pHead;
	*pHead = (*pHead)->next;
	delete(deletedNode);
}