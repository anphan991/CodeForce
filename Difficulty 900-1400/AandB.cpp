#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long calculate_min_swaps(const vector<int>& indices) {
    int k = indices.size();
    if (k == 0) return 0;
    vector<int> y(k);
    for (int i = 0; i < k; ++i) {
        y[i] = indices[i] - i;
    }
    int median = y[k / 2];

    long long cost = 0;
    for (int val : y) {
        cost += abs(val - median);
    }
    return cost;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> posA, posB;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            posA.push_back(i);
        } else {
            posB.push_back(i);
        }
    }
    long long costA = calculate_min_swaps(posA);
    long long costB = calculate_min_swaps(posB);
    cout << min(costA, costB) << "\n";
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
