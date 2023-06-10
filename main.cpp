#include<iostream>

using namespace std;

int main() {
	int s[4];

	int a = 0;
	for (int i = 0; i < 4; i++) {
		cin >> s[i];
		for (int j = 0; j < i; j++) if (s[j] == s[i]) { a++; break; }
	}

	cout << a;
}
