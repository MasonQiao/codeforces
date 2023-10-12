// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int t, n, z, ans;
string a;
char arr[4], matrix[1000][1000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			for (int j = 0; j < n; j++) {
				matrix[j][i] = a[j];
			}
		}
		for (int x = 0; x < n/2; x++) {
			for (int y = 0; y < n/2; y++) {
				arr[0] = matrix[x][y];
				arr[1] = matrix[(n-y)-1][x];
				arr[2] = matrix[y][(n-x)-1];
				arr[3] = matrix[(n-x)-1][(n-y)-1];
				sort(arr, arr + 4);
				ans += (arr[3] - arr[0]) + (arr[3] - arr[1]) + (arr[3]- arr[2]);
				
			}
			
		}
		cout << ans << "\n";
		
	}
}
