#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long r1 = 0, r2 = 0;
        int bothPos = 0, bothNeg = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                if (a[i] == 1) bothPos++;
                else if (a[i] == -1) bothNeg++;
            } else {
                if (a[i] > b[i]) r1 += a[i];
                else r2 += b[i];
            }
        }
        while (bothPos--) {
            if (r1 <= r2) r1++;
            else r2++;
        }
        while (bothNeg--) {
            if (r1 >= r2) r1--;
            else r2--;
        }

        cout << min(r1, r2) << "\n";
    }
    return 0;
}

