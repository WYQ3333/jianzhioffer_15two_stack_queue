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
		while (stack1.empty()){
			auto temp = stack1.top();
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