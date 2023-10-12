// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int t, n, m;
string x, s;
bool done;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> t;
	for (int i = 0; i < t; i++) {
		done = false;
		cin >> n >> m >> x >> s;
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k <= n*pow(2, j) - m; k++) {
				if (x.substr(k, m) == s) {
					cout << j << "\n";
					done = true;
					break;
				}
			}
			if (done) {
				break;
			}
			x += x;
		}
		if (!done) {
			cout << -1 << "\n";
		}
	}
}
