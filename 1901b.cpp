#include <bits/stdc++.h>
using namespace std;

int t, r[200000], n, ans, l, x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--) {
        ans = -1;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> r[j];
        }
        while (true) {
            l = -1;
            for (int j = 0; j < n; j++) {
                if (r[j] != 0) {
                    l = j;
                    break;
                }
            }
            if (l == -1) {
                break;
            }
            x = r[l];
            for (int j = l; j < n; j++) {
                if (r[j] == 0) {
                    break;
                }
                x = min(x, r[j]);
            }
            for (int j = l; j < n; j++) {
                if (r[j] == 0) {
                    break;
                }
                r[j] -= x;
            }
            ans += x;
        }
        cout << ans << "\n";
    }
    return 0;
}
