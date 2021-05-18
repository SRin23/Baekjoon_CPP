#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (i < 100) {
			count++;
		}
		else if (i < 1000) {
			if (((i % 10) - ((i / 10) % 10)) == ((i / 100) - ((i / 10) % 10)))
				count++;
		}
	}
	cout << count << endl;
}