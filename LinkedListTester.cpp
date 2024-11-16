#include <iostream>
#include "LinkedList.h"
using namespace std;


int main1()
{
	ListNode* p = nullptr;
	addNode(&p, 47);
	addNode(&p, 39);

	cout << p->val << '\n';

	removeNode(&p);

	cout << p->val << '\n';

	removeNode(&p);

	cout << (p == nullptr) << '\n';

	removeNode(&p);

	cout << (p == nullptr) << '\n';

	return 0;
}