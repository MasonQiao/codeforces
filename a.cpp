// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int t, n, k;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n >> k;

		int ans = 0;

		for (int i = 1; i <= n; i++) {
			ans = max(ans,  2*(i/k + (i%k != 0) - max(0, 2*i - n )));
		}
		cout << ans << "\n";
	}
}

