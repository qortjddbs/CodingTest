#include <iostream>
using namespace std;

int main(void) {
	int price; cin >> price;
	int num; cin >> num;
	int a, b;
	int sum = 0;
	
	for (int i = 0; i < num; ++i) {
		cin >> a;
		cin >> b;
		sum += a * b;
	}

	if (sum == price) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}