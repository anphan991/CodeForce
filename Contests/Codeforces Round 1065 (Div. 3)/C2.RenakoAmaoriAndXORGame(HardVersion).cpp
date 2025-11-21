#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    for (int k = 20; k >= 0; --k) {
        int ones = 0;
        int last_diff_idx = -1;

        for (int i = 0; i < n; ++i) {
            int bit_a = (a[i] >> k) & 1;
            int bit_b = (b[i] >> k) & 1;
            
            ones += bit_a + bit_b;
            
        
            if (bit_a != bit_b) {
                last_diff_idx = i + 1; 
            }
        }
        if (ones % 2 == 0) continue;

  
        if (last_diff_idx % 2 != 0) {
            cout << "Ajisai" << endl;
        } else {
            cout << "Mai" << endl;
        }
        return; 
    }

    cout << "Tie" << endl;
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
