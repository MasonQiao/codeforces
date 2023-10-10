#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, arr[3], anwsers[16000000], array_index;

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
                    anwsers[array_index] = i + j + k;
                    array_index ++;
                }
            }
        }
    }
    sort(anwsers, anwsers + array_index+1);
    cout << anwsers[array_index];
}
