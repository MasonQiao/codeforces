// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int t, n, k, arr[100], ans;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n >> k;

		arr[0] = 1;
		arr[n-1] = 1;

		for (int i = 1; i <= n; i++) {
            if (i/k + (i%k != 0) >= i) {
                arr[i-1] = 1;
                arr[n-i-1] = 1;
            }
		}

		ans = 0;
		for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                ans++;
                arr[i] = 0;
            }
		}
		cout << ans << "\n";
	}
	return 0;
}

