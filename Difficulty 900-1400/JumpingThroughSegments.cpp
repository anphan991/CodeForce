#include <bits/stdc++.h>
using namespace std;

static inline bool canFinish(const vector<long long>& l, const vector<long long>& r, long long k) {
    long long L = 0, R = 0; 
    int n = (int)l.size();
    for (int i = 0; i < n; i++) {
        long long nL = max(l[i], L - k);
        long long nR = min(r[i], R + k);
        if (nL > nR) return false;
        L = nL; R = nR;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> l(n), r(n);
        for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

        long long lo = 0, hi = 1000000000LL; 
        while (lo < hi) {
            long long mid = (lo + hi) / 2;
            if (canFinish(l, r, mid)) hi = mid;
            else lo = mid + 1;
        }
        cout << lo << "\n";
    }
    return 0;
}

