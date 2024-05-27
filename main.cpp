#include <iostream>

using namespace std;
int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	int num1, num2;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	int result = max(num1, num2);
	cout << "Max: " << result << endl;
	return 0;


}