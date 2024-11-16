#include "Stack.h"


void push(Stack* s, unsigned int element)
{
	addNode(&s->list, element);
}

int pop(Stack* s)
{
	if (isEmpty(s)) return -1;
	int x = s->list->val;
	removeNode(&s->list);
	return x;
}


void initStack(Stack* s)
{
	s->list = nullptr;
}

void cleanStack(Stack* s)
{
	while (!isEmpty(s))
	{
		removeNode(&s->list);
	}
}


bool isEmpty(Stack* s)
{
	return s->list == nullptr;
}

bool isFull(Stack* s)
{
	return false;
}