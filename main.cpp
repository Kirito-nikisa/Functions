#include <iostream>

using namespace std;

double power(double base, int exponent) {
	double result = 1.0;
	if (exponent < 0) {
		base = 1.0 / base;
		exponent = -exponent;
	}
	for (int i = 0; i < exponent; ++i)
	{
		result *= base;
	}
	return result;
}

int main() {
	double base;
	int exponent;
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exponent;

	double result = power(base, exponent);
	cout << base << " raised of the power of " << exponent << " is " << result << endl;
	return 0;
}