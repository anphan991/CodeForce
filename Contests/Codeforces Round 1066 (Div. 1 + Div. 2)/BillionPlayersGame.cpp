#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long l, r;
    if (!(cin >> n >> l >> r)) return;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long SL = 0;
    long long SR = 0;
    for (long long val : a) {
        if (val <= l) {
            SL += (l - val);
            SR += (r - val);
        } else if (val >= r) {
            SL += (val - l);
            SR += (val - r);
        } else {
            long long double_val = 2 * val;
            long long sum_lr = l + r;
            
            if (double_val < sum_lr) {
                SL -= (val - l);
                SR += (r - val);
            } else if (double_val > sum_lr) {
                SL += (val - l);
                SR -= (r - val);
            } else {
            }
        }
    }

    long long ans = min(SL, SR);
    if (SL < SR) {
        vector<long long> candidates;
        for (long long val : a) {
            if (val > l && val < r && 2 * val <= l + r) {
                candidates.push_back(val);
            }
        }

        sort(candidates.rbegin(), candidates.rend());

        for (long long val : candidates) {
            long long u = val - l;
            long long v = r - val;
            
            int steps = (2 * val == l + r) ? 1 : 2;
            
            while (steps--) {
                SL += u;
                SR -= v;
                ans = max(ans, min(SL, SR));
            }
        }
    } else if (SR < SL) {
        vector<long long> candidates;
        for (long long val : a) {
            if (val > l && val < r && 2 * val >= l + r) {
                candidates.push_back(val);
            }
        }
        sort(candidates.begin(), candidates.end());

        for (long long val : candidates) {
            long long u = val - l;
            long long v = r - val;
            
            int steps = (2 * val == l + r) ? 1 : 2;
            
            while (steps--) {
                SL -= u;
                SR += v;
                ans = max(ans, min(SL, SR));
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
