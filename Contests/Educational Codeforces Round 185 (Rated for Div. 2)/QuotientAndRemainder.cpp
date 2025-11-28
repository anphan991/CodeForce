#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> q(n);
    for (int i = 0; i < n; ++i) cin >> q[i];
    
    vector<long long> r(n);
    for (int i = 0; i < n; ++i) cin >> r[i];
    
    sort(q.begin(), q.end());
    sort(r.begin(), r.end());
    
    int matches = 0;
    int r_ptr = n - 1; 
    
    for (int i = 0; i < n; ++i) {
        long long current_q = q[i];
        
        if (current_q >= k) {
            break;
        }

        long long limit = (k - current_q) / (current_q + 1);
        
        while (r_ptr >= 0 && r[r_ptr] > limit) {
            r_ptr--;
        }
        
        if (r_ptr >= 0) {
            matches++;
            r_ptr--; 
        } else {
            break;
        }
    }
    
    cout << matches << "\n";
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
