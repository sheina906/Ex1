#include "Stack.h"
#include "Utils.h"


void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	initStack(s);

	for (int i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}

	for (int i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}

	cleanStack(s);
	delete(s);
}



#include <iostream>
using namespace std;

int* reverse10()
{
	int size = 10;
	int* nums = new int[size];

	cout << "please enter " << size << " non negative integers" << '\n';

	for (int i = 0; i < size; i++)
	{
		cin >> nums[i];
	}

	reverse(nums, size);

	return nums;
}