#include <bits/stdc++.h>
using namespace std;

int n, x, anwser, best_move, lowest_loss;
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

    while (!possible_moves.empty()) {
        itr = possible_moves.begin();
        lowest_loss = (*itr+1) * (sequence[*itr + 1]) + (*itr - 1) * (sequence[*itr - 1]) - *itr;
        best_move = *itr;
        itr++;
        while (true) {
            if ((*itr+1) * (sequence[*itr + 1]) + (*itr - 1) * (sequence[*itr - 1]) - *itr < lowest_loss) {
                best_move = *itr;
                lowest_loss = *itr + (*itr+1) * (sequence[*itr + 1]) + (*itr - 1) * (sequence[*itr - 1]);
            }

            if (itr == possible_moves.end()) {
            break;
            }

            itr ++;
        }

        sequence[best_move] -= 1;
        if (sequence[best_move] == 0) {
            possible_moves.erase(best_move);
        }
        possible_moves.erase(best_move+1);
        possible_moves.erase(best_move-1);
        sequence[best_move+1] = 0;
        sequence[best_move-1] = 0;
        anwser += best_move;
    }

    cout << anwser;

    return 0;
}
