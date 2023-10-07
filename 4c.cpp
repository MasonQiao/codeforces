#include <bits/stdc++.h>
using namespace std;

string currentusername;
int n, currentusername_key;
map<string, int> usernames;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for (int j = 0; j < n; j++) {
        cin >> currentusername;
        usernames[currentusername] ++;
        int i = usernames[currentusername] - 1;
        if (i == 0) {
            cout << "OK" << "\n";
        }
        else {
            cout << (currentusername + to_string(i)) << "\n";
        }
    }

    return 0;
}
