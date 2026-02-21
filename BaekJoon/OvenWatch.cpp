#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void CompletionTime(int hour, int minute, int cooking_time) {
	if (minute + cooking_time < 60) {
		cout << hour << " " << minute + cooking_time;
	}
	else {	// 분 + 요리시간이 60보다 크다면 (시간 증가 + 얼마나?)
		hour += (minute + cooking_time) / 60;
		minute = (minute + cooking_time) % 60;
		
		if (hour > 23) {
			hour %= 24;
		}
		cout << hour << " " << minute;
	}
}

int main(void) {
	int hour = -1;
	int minute = -1;
	int cooking_time = -1;
	cin >> hour;
	cin >> minute;
	cin >> cooking_time;

	CompletionTime(hour, minute, cooking_time);
	return 0;
}