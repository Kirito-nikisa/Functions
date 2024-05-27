#include <iostream>

using namespace std;


void printRectangle(int N, int K) {
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < K; ++j)
		{
			cout << '*';
		}cout << endl;
	}

}
int main() {
	int height, width;
	cout << "Enter height(N): ";
	cin >> height;
	cout << "Enter width(K): ";
	cin >> width;
	printRectangle(height, width);
	return 0;
}