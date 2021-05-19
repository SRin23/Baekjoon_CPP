#include<iostream>
using namespace std;
int main() {
	int num = 0;
	cin >> num;
	int sum = 0;
	char* str = (char *)malloc(sizeof(num));
	cin >> str;
	for (int i = 0; i < num; i++) {
		str[i] = str[i] - '0';
		sum += str[i];
	}
	cout << sum;
	return 0;
}