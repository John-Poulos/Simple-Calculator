#include <iostream>
#include <string>
#include <math.h>

int main()
{
	float n1, n2, result;
	char ops;

	std::cout << "Enter first number: ";
	std::cin >> n1;
	std::cout << "Select operation type: (+,-,*,/,%,^,s) ";
	std::cin >> ops;

	std::cout << "Enter second number: ";
	std::cin >> n2;

	

	switch(char(ops)) 
	{
	case '+':
		result = n1 + n2;
		break;

	case '-':
		result = n1 - n2;
		break;

	case '*':
		result = n1 * n2;
		break;

	case '/':
		result = n1 / n2;
		break;

	case '%':
		int n11, n21;
		n11 = int(n1);
		n21 = int(n2);
		result = n11 % n21;
		break;

	case '^':
		result = pow(n1, n2);
		break;

	case 's':
		result = sqrt(n1);
		break;

	}


	std::cout << "Value: " << result;

	
}