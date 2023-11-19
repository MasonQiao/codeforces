#include <bits/stdc++.h>
using namespace std;

int t, a, b, n, k;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++) {
        a = 0;
        b = 0;
        cin >> n >> k >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'B') {
                b++;
            }
        }
        if (b == k) {
            cout << 0 << "\n";
            continue;
        }
        else if (b < k) {
            for (int j = 0; j < n; j++) {
                if (s[j] == 'A') {
                    a++;
                }
                if (a == k-b) {
                    cout << 1 << "\n" << j+1 << " " << "B" << "\n";
                    break;
                }
            }
        }
        else {
            for (int j = 0; j < n; j++) {
                if (s[j] == 'B') {
                    a++;
                }
                if (a == b-k) {
                    cout << 1 << "\n" << j+1 << " " << "A" << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}
