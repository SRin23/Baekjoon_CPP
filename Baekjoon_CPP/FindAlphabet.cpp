#include<iostream>
using namespace std;

int main() {
	char s[100];
	cin >> s;
	int num[30] = { 0 };
	for (int i = 0; i < 30; i++) {
		num[i] = -1;
	}
	for (int j = 0; s[j] != NULL; j++) {
		for (int i = 'a'; i <= 'z'; i++) {
			if (s[j] == i) {
				num[i-'a'] = j;
			}
		}
	}
	
	for (int i = 0; i <= 26; i++) {
		cout << num[i] << "\t";
	}
}