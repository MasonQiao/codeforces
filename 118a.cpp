// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool isvowel(char a) {
	if (a == 'a' || a == 'A' || a == 'o' || a == 'O' || a == 'y' || a == 'Y' || a == 'e' || a == 'E' || a == 'u' || a == 'U' || a == 'i' || a == 'I') {
		return true;
	}
	return false;
}

string str;

int main() {
	cin >> str;
	int i = 0;
	for (int i = 0; i < str.size(); i++) {
		if (isvowel(char(str[i]))) {
			str.erase(i, 1);
			i -= 1;
			continue;
		}
		if (isupper(str[i])) {
			str[i] = str[i] + 32;
		}
	}
	for (int i = 0; i < str.size(); i++) {
		cout << "." << str[i];
	}
}

