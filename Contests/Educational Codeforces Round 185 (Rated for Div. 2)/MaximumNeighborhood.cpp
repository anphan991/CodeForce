#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    auto get_val = [&](int r, int c) {
        return (r * n) + c + 1;
    };

    long long max_cost = 0;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c) {
            long long current_val = get_val(r, c);
            long long current_cost = current_val;

            for (int i = 0; i < 4; ++i) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                    current_cost += get_val(nr, nc);
                }
            }
            if (current_cost > max_cost) {
                max_cost = current_cost;
            }
        }
    }

    cout << max_cost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
