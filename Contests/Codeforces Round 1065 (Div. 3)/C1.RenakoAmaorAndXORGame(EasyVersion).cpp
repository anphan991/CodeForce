#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    int total_ones = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_ones += a[i];
    }


    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        total_ones += b[i];
    }

    if (total_ones % 2 == 0) {
        cout << "Tie" << endl;
        return;
    }
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] != b[i]) {
            if ((i + 1) % 2 != 0) { 
                cout << "Ajisai" << endl;
            } else { 
                cout << "Mai" << endl;
            }
            return;
        }
    }
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
