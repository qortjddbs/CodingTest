#include <iostream>
using namespace std;

int main(void) {
	int testNum = -1;
	cin >> testNum;
	int a = 0, b = 0;
	int *arr = new int[testNum];

	for (int i = 0; i < testNum; ++i) {
		cin >> a;
		cin >> b;
		arr[i] = a + b;
	}

	for (int i = 0; i < testNum; ++i) {
		cout << arr[i] << endl;
	}

	return 0;
}