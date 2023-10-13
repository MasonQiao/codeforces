#include <bits/stdc++.h>
using namespace std;

int n, x, anwser;
const int aux[10e5];
map <int, int>sequence;
set <int>possible_moves;
set<int>::iterator itr;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        sequence[x] ++;
        possible_moves.insert(x);
    }
    int i = 1;


    while (i++) {
        if (map[i] == 0) {
            break;
        }
        aux[i] = map[i];
    }
    for (int j = 1; j < i; j++) {

    }
    return 0;
}
