#include <iostream>

using namespace std;

int sumInRange(int a, int b) {
	int sum = 0;
	int minNum = min(a, b);
	int maxNum = max(a, b);
	for (int i = minNum; i <= maxNum; ++i)
	{
		sum += i;
	}return sum;
}
int main() {
	int num1,num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	int result = sumInRange(num1, num2);
	cout << "Sum of number in the range between " << num1 << " and " << num2 << " is " << result << endl;
	return 0;
}