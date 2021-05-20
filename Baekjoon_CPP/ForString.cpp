#include<iostream>
using namespace std;

int main() {
	int num = 0;
	cin >> num;
	char s[50];
	cin >> s;
	char t[50];
	
	for(int i = 0; s[i]!=NULL; i++){
		for (int j = 0; j < num; j++) {
			cout << s[i];
		}
	}

}