#include <bits/stdc++.h>
using namespace std;

bool inusernames(string username, string usernames1[], int n1) {
    for (int i = 0; i < n1; i++) {
        if (username == usernames1[i]) {
                return true;
        }
    }
    return false;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string currentusername;
    string usernames[n];
    cin >> n;
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cin >> currentusername;
        if (!(inusernames(currentusername, usernames, n))) {
            cout << "OK" << "\n";
            usernames[i] = currentusername;
        }
        else {
            int a = 0;
            while (true) {
                a++;
                currentusername = currentusername + to_string(a);
                if (!(inusernames(currentusername, usernames, n))) {
                    break;
                }
            }
            cout << currentusername << "\n";
            usernames[i] = currentusername;
        }
    }

    return 0;
}
