#include<iostream>
using namespace std;

void selfNum() {
	bool check[1000] = { true };
	for (int i = 0; i <= 1000; i++) {
		int sum = 0;
		int num = i;
		while (i != 0) {
			sum += (i % 10);
			i /= 10;
		}
		check[sum + num] = false;

	}
	for (int i = 0; i <= 1000; i++) {
		if (check[i] == true) {
			cout << i << endl;
		}
	}
}

int main() {
	selfNum();
}