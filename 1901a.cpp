#include <bits/stdc++.h>
using namespace std;

int t;

void sol() {
    int n, x, ans, l, r;
    ans = 0;
    l = 0;
    r = 0;
    cin >> n >> x;
    cin >> l;
    ans = l;
    r = l;
    for (int j = 1; j < n; j++) {
        cin >> r;
        ans = max(ans, r - l);
        l = r;
    }
    ans = max(ans, 2*(x-r));
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++) {
        sol();
    }

    return 0;
}
