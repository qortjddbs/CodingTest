#include <iostream>
using namespace std;

int AddNum(int a, int b) {
	return a + b;
}

int main(void) {
	int testNum = -1;
	cin >> testNum;
	int a = 0, b = 0;

	for (int i = 0; i < testNum; ++i) {
		cin >> a;
		cin >> b;
	}

	AddNum(a, b);

	return 0;
}