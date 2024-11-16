#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->elements = new int[size];
	q->maxSize = size;
	q->size = 0;
	q->start = 0;
	q->end = 0;
}

void cleanQueue(Queue* q)
{
	delete(q->elements);
	q->maxSize = 0;
	q->size = 0;
	q->start = 0;
	q->end = 0;
}


void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q)) return ;
	q->size++;
	q->elements[q->end++] = newValue;
	if (q->end == q->maxSize) q->end = 0;
}

int dequeue(Queue* q)
{
	if (isEmpty(q)) return -1;
	q->size--;
	int x = q->elements[q->start++];
	if (q->start == q->maxSize) q->start = 0;
	return x;
}


bool isEmpty(Queue* q)
{
	return q->size == 0;
}

bool isFull(Queue* q)
{
	return q->size == q->maxSize;
}