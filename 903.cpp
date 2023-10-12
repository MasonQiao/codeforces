// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int t, n, x, y, z, ans;
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
		for (int i = 0; i < (n*n/4); i++) {
			if (i == 0) {
				x = 0;
				y == 0;
			}
			else {
				x = (n/2)%i;
				y = (n/2)/i;
			}
			
			arr[0] = matrix[x][y];
			arr[1] = matrix[n-y-1][x];
			arr[2] = matrix[y][n-x-1];
			arr[3] = matrix[n-x-1][y-x-1];
			sort(arr, arr + 4);
			z = 3;
			if (arr[0] == arr[1]) {
				z -= 1;
			}
			if (arr[1] == arr[2]) {
				z -= 1;
			}
			if (arr[2] == arr[3]) {
				z -= 1;
			}
			ans += z;
			
		}
		cout << ans << "\n";
		
	}
}
