#include <bits/stdc++.h>
using namespace std;

long long t, n, ans, a[200000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    for (int j = 0; j < t; j++) {
        cin >> n;
        ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = n-2; i >= 0; i-=1) {
            cout << "\n";
            if (a[i] > a[i+1]) {
                if (a[i] % a[i+1] == 0) {
                    ans += (a[i]/a[i+1] - 1);
                    a[i] = a[i+1];
                }
                else {
                    ans += (a[i]/a[i+1]);
                    a[i] = a[i]/(a[i]/a[i+1]+1);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
