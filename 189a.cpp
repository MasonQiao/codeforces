#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, arr[3], anwser, x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    for (int i = 0; i <= n/c; i ++) {
        for (int j = 0; j <= n/b; j ++) {
            x = n - (i*c) - (j*b);
            if (x%a == 0) {
                anwser = max(i+j+x/a, anwser);
            }
        }
    }
    cout << anwser;
    return 0;
}
