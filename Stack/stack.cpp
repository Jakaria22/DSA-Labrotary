#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);
    if(!stack.empty()) cout<<"Stack is full\n"; 
    else cout<<"Stack is empty\n";
    cout<<"Stack elements: ";
	while (!stack.empty()) {
		cout << ' ' << stack.top();
		stack.pop();
	} 
}
