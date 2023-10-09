#include <bits/stdc++.h>
using namespace std;

int n, previous_number, next_number;

int main() {
    cin >> n;
    int difs[n-1];
    cin >> previous_number;
    for (int i = 0; i < n - 1; i++) {
        cin >> next_number;
        difs[i] = next_number - previous_number;
        cout << difs[i] << " ";
        if (i + 2 == n) {
            break;
        }
        previous_number = next_number;

    }


    if (difs[0] != difs[1] && difs[1] == difs[2] && difs[2] == difs[3]) {
        cout << 1;
        return 0;
    }

    if (difs[n-2] != difs[n-3] && difs[n-3] == difs[n-4] && difs[n-4] == difs[n-5]) {
        cout << n;
        return 0;
    }


    if (n==3) {
        if (previous_number == next_number) {
            cout << 1;
            return 0;
        }
        else if (difs[0] == -1*difs[1]) {
            cout << 2;
            return 0;
        }
        else {
            cout << 3;
            return 0;
        }
    }

    if (n==4) {
        if ((difs[0] > 0 && difs[1] > 0 && difs[2] < 0) || (difs[0] < 0 && difs[1] < 0 && difs[2] > 0)) {
            cout << 2;
            return 0;
        }
        if ((difs[0] > 0 && difs[1] < 0 && difs[2] > 0) || (difs[0] < 0 && difs[1] > 0 && difs[2] < 0)) {
            cout << 3;
            return 0;
        }
    }

    for (int i = 1; i < n; i++) {
        if ((difs[i-2] != difs[i-1]) && (difs[i-2] + difs[i-1] == 2*difs[i-3] || difs[i-2] + difs[i-1] == difs[i])) {
            cout << i;
            return 0;

        }
    }

}
