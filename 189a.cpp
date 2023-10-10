#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, arr[3], anwser;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    for (int i = n/c; i >= 0; i-=1) {
        for (int j = 0; j >= 0; j-=1) {
            for (int k = n/a; k >= 0; k-=1) {
                if (i*c + j*b + k*a == n) {
                    anwser = max(anwser, i + j + k);
                }
            }
        }
    }
    cout << anwser;
}
