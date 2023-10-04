#include <bits/stdc++.h>
using namespace std;

string usernames[100000], currentusername, testusername;
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
                testusername = currentusername + to_string(a);
                if (!(inusernames(testusername))) {
                    break;
                }
            }
            cout << testusername << "\n";
            usernames[i] = testusername;
        }
    }

    return 0;
}
