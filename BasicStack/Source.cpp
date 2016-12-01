#include <iostream>
#include <stack>

using namespace std;
// Stack is known as Last in - First Out
// basic operators push, pop, peek, Full, Empty 



int main() {

	stack<int> myStack;
	myStack.push(5);
	myStack.push(3);
	myStack.push(6);
	myStack.push(1);
	myStack.push(9);

	cout << "Number of ints on the stack: " << myStack.size() << endl;
	while (!myStack.empty()) {
		cout << "Popping " << myStack.top() << endl;
		myStack.pop();
		
	}

	cout << "Number of ints remained on stack: " << myStack.size() << endl;

	system("pause");

	return 0;

}