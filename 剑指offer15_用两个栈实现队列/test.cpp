#include<iostream>
using namespace std;
#include<stack>


class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		

		while (!stack1.empty()){
			auto temp = stack1.top();
			stack1.pop();
			stack2.push(temp);
		}
		auto cur = stack2.top();
		stack2.pop();
		return cur;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};

class Solution2
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {

		
		while (!stack1.empty()){
			auto temp = stack1.top();
			stack1.pop();
			stack2.push(temp);
		}
		auto cur = stack2.top();
		stack2.pop();
		return cur;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};


void TestFunc(){

	Solution q;
	q.push(1);
	q.push(2);
	q.push(3);
	int a = q.pop();
	cout << a << " " << endl;
	a = q.pop();
	cout << a << " " << endl;
	q.push(4);
	q.push(5);
	a = q.pop();
	cout << a << " " << endl;
	a = q.pop();
	cout << a << " " << endl;
	a = q.pop();
	cout << a << " " << endl;
}

//void TestFunc(){
//	stack<int> s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//	s.push(5);
//	
//}

int main(){
	TestFunc();
	system("pause");
	return 0;
}