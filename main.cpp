#include <iostream>

using namespace std;

int cube(int n) {
	return n * n * n;
}


int main() {
	int number;
	cout << "Enter number: ";
	cin >> number;
	int result = cube(number);
	cout << "Cube of " << number << " is " << result << endl;
	return 0;
}