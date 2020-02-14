/*
2-1 Create an enum class Operation that has values
	Add,
	Subtract,
	Multiply,
	and Divide.
*/

/*
2-2 Create a struct Calculator.
It should have a single constructor that takes an Operation.
*/

/*
2-3 Create a method on Calculator called int calculate(int a, int b).
Upon invocation,
this method should perform 
	addition, 
	subtraction, 
	multiplication, 
	or division 
based on its constructor argument and return the result.
*/

/*
2-4 Experiment with different means of initializing Calculator instances
*/

#include <cstdio>

enum class Operation {
	Add,
	Subtract,
	Multiply,
	Divide
};

struct Calculator {
	Operation op;
	Calculator(Operation op) : op{ op } {}
	int calculate(int a, int b) {
		switch (this->op) {
		case Operation::Add: {
				return a + b;
			} break;
		case Operation::Subtract: {
				return a - b;
			} break;
		case Operation::Multiply: {
				return a * b;
			} break;
		case Operation::Divide: {
				return a / b;
			} break;
		}
	}
};

int main() {

	int a = 42;
	int b = 6;

	printf("a = %d; b = %d;\n", a, b);

	Calculator adder{ Operation::Add };
	printf("a + b = %d\n", adder.calculate(a, b));

	Calculator* differ = new Calculator( Operation::Subtract );
	printf("a - b = %d\n",  differ->calculate(a, b));

	Calculator multi = { Operation::Multiply };
	printf("a * b = %d\n", multi.calculate(a, b));

	Calculator divisor(Operation::Divide);
	printf("a / b = %d\n", divisor.calculate(a, b));
	
	return 0;
}