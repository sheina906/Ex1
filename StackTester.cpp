#include <iostream>
#include "Stack.h"
using namespace std;


int main2()
{
	Stack* s = new Stack;
	initStack(s);


	cout << pop(s) << '\n';

	push(s, 180);
	cout << pop(s) << '\n';

	push(s, 5);
	push(s, 4);
	push(s, 3);
	push(s, 2);
	push(s, 1);
	while (!isEmpty(s))
	{
		cout << pop(s) << ' ';
	}
	cout << '\n';


	cleanStack(s);
	delete(s);


	return 0;
}