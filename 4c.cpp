#include <bits/stdc++.h>
using namespace std;

string usernames[100000], currentusername;
int n;

bool inusernames(string username) {
    for (int i = 0; i < n; i++) {
        if (username == usernames[i]) {
                return true;
        }
    }
    return false;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cin >> currentusername;
        if (!(inusernames(currentusername))) {
            cout << "OK" << "\n";
            usernames[i] = currentusername;
        }
        else {
            int a = 0;
            while (true) {
                a++;
                currentusername = currentusername + to_string(a);
                if (!(inusernames(currentusername))) {
                    break;
                }
            }
            cout << currentusername << "\n";
            usernames[i] = currentusername;
        }
    }

    return 0;
}
