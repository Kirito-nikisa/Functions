#include<iostream>

using namespace std;

bool isPositive(int n) {
		return n>0;
	
}

int main() {
	int number;
	cout << "Enter number: ";
	cin >> number;
	if (isPositive(number)) {
		cout << "Number is positive" << endl;
	}
	else {
		cout << "Number is negarive" << endl;
	}
	

	return 0;
}