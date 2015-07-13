#include <iostream>
using namespace std;

class Stack {
    private:
	int stackstore[100];
	int SP;
    public:
	Stack(void)
	{
	    cout << "Stack Constructor" << endl;
	    SP = 0;
    }
	void push(int value);
	int pop(void) {
	    cout << "stack pop function" << endl;
		return stackstore[--SP];
	}
};

void Stack::push(int value) {
    cout << "stack push function" << endl;
	stackstore[SP++] = value;
}

class AddingStack : Stack {
    private:
	int sum;
    public:
	AddingStack(void);
	void push(int value);
	int pop(void);
	int getSum(void);
};

AddingStack::AddingStack(void) : Stack() {
    cout << "AddingStack Constructor" << endl;
	sum = 0;
}

void AddingStack::push(int value) {
    cout << "AddingStack push function" << endl;
	sum += value;
	Stack::push(value);
}

int AddingStack::pop(void) {
    cout << "AddingStack pop function" << endl;
	int val = Stack::pop();
	sum -= val;
	return val;
}

int AddingStack::getSum(void) {
    cout << "AddingStack getsum function" << endl;
	return sum;
}

using namespace std;

int main(void) {
	AddingStack super_stack;

	for(int i = 1; i < 2; i++)
		super_stack.push(i);
	cout << super_stack.getSum() << endl;
	for(int i = 1; i < 2; i++)
		super_stack.pop();
	cout << super_stack.getSum() << endl;
	return 0;
}
