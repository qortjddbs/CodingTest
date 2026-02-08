#include <iostream>
using namespace std;

void Table(int dan) {
	for (int i = 0; i < 9; ++i) {
		cout << dan << " * " << i + 1 << " = " << dan * (i + 1) << endl;
	}
}

int main(void) {
	int dan = -1;
	cin >> dan;

	Table(dan);

	return 0;
}