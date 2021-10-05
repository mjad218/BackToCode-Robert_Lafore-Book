#include <iostream>
#include <cstring> 

using namespace std; 


class Stack {
private:
	static const int MAX = 10000;
	int top;
	int arr[MAX];
public:
	Stack() : top(-1)
	{
	}
	void push(int value) {
		arr[++top] = value;
	}
	int pop() {
		return arr[top--];
	}
	int* whatInStack() {
		return arr;
	}
	bool isEmpty() {
		return top == -1;
	}
	bool hasOneItem() {
		return top == 0;
	}
};

int toInt(char c) {
	return c - '0';
}
class Expression {
	Stack stack; 

public:
	void parse(const char* str) {
		int operations = 0; 
		for (int i = 0; i < strlen(str); i++) {		
			if (str[i] == '+' || str[i] == '-') {
				operations++;
				if (operations > 1) {
					int result = stack.pop();
					char op = stack.pop();
					if (op == '+' || op == '-') {
						(op == '+') ? result += (stack.pop() ) : result -= (stack.pop());
						stack.push(result);
						stack.push(str[i]);
					}
					else {
						(op == '*') ? result *= (stack.pop() ) : result /= (stack.pop());
						stack.push(result);
						stack.push(str[i]);
					}		
				}
				else {
					stack.push(str[i]);
				}
			} else if( str[i] == '*' || str[i] == '/') {
				operations++;
				if (operations > 1) {
					int result = stack.pop();
					char op = stack.pop();
					if (op == '*' || op == '/') {
						(op == '*') ? result *= (stack.pop()) : result /= (stack.pop());
						stack.push(result);
						stack.push(str[i]);
					}
				}
				else {
					stack.push(str[i]);
				}
			} else {			
				stack.push(str[i] - '0');
			}
		}
	}

	int solve() {
		int var1 = 0, var2, result = 0;
		int item;

		while (!stack.hasOneItem() ) {
			item = stack.pop();
			if (item == '+' || item == '-') {
				if (stack.hasOneItem()) {
					var2 = stack.pop();
					result = (item == '+') ? var1 + var2 : var2 - var1;
					stack.push(result);
					break; 
				}
				else {
					var2 = stack.pop();
					char nextOp = stack.pop();
					if (nextOp != '/' && nextOp != '*') {
						result = (item == '+') ? (var1 + var2) : (var2 - var1);
						stack.push(nextOp);
						stack.push(result);
					}
					else {
						int temp = var1; 
						var1 = stack.pop();
						result = (nextOp == '*') ? (var1 * var2) : (var2 / var1);
						stack.push(result);
						stack.push(item);
						stack.push(temp);
					}

				}
			}
			else if (item == '*' || item == '/') {
				if (stack.hasOneItem()) {
					var2 = stack.pop();
					result = (item == '*') ? var1 * var2 : var2 / var1;
					stack.push(result);
					break;
				}
				else {
					var2 = stack.pop();
					result = (item == '*') ? var1 * var2 : var2 / var1;
					stack.push(result);
				}
			
			}
			else {
				var1 = item ;
			}
		}
		return stack.pop();
	}
};
int main() {
	char again = 'n';

	cout << "Enter an expression to be calculated," << endl << "The Expression should not include parentheses and numbers must be postitve and less than 9."; 
	 do{

		cout << endl << "Expression : ";
		char calc[] = "0";
		cin >> calc;
		Expression exp;
		exp.parse(calc);

		cout << "Answer is : " << exp.solve();

		cout << endl << "Enter y to calculate agian : "; 
		cin >> again; 
	}while (again == 'y'); 

	return 0;
}