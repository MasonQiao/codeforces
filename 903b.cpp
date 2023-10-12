// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int t, a, b, c, sorter[3], x, y, z;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		sorter[0] = a;
		sorter[1] = b;
		sorter[2] = c;
		sort(sorter, sorter + 3);
		x = sorter[0];
		y = sorter[1];
		z = sorter[2];
		if (y%x != 0 || z%x != 0) {
			cout << "NO" << "\n";
			continue;
		}
		if (y/x + z/x - 2 <= 3) {
			cout << "YES" << "\n";
			continue;
		}
		else  if (y/x + z/x - 2 > 3) {
			cout << "NO" << "\n";
		}
	}
}
