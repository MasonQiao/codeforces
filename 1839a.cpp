#include <bits/stdc++.h>
using namespace std;

int t, n, k, arr[100], ans;

int ones_before_n(int a) {
	int counter = 0;
	for (int i = 0; i <= a; i++) {
		if (arr[i] == 1) {
			counter++;
		}
	}
	return counter;
}

int ones_after_n(int a) {
	int counter = 0;
	for (int i = n-1; i >= a; i-=1) {
		if (arr[i] == 1) {
			counter++;
		}
	}
	return counter;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n >> k;

		arr[0] = 1;
		arr[n-1] = 1;

		for (int i = 1; i <= n; i++) {
            if (i/k + (i%k != 0) > ones_before_n(i-1)) {
                arr[i-1] = 1;
            }
			if (i/k + (i%k != 0) > ones_after_n(n-i+1)) {
				arr[n-i] = 1;
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
