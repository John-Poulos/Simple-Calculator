include <iostream>
include <string>

int main()
{
	float n1, n2, result;
	string ops;

	std::cout << "Enter first number: ";
	cin >> n1;
	cout << "Select operation type: (+,-,*,/,%,^,sqrt) ";
	cin >> ops;
	cout << "Enter second number: ";
	cin >> n2;
	cout << "Value " << result;

	if (ops == +)
		result = n1 + n2;
}