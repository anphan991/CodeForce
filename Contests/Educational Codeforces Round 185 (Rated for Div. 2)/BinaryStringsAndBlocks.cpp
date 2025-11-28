#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;

   
    vector<int> max_l(n + 1, 0); 
    
    for (int i = 0; i < m; ++i) {
        int l, r;
        cin >> l >> r;

        max_l[r - 1] = max(max_l[r - 1], l);
    }

    
    vector<int> dp(n + 1, 0);
    vector<int> prefix_sum(n + 1, 0); 


    dp[0] = 1;
    prefix_sum[0] = 1;
    
    int current_bound = 0;
    
    for (int i = 1; i <= n; ++i) {
        
        current_bound = max(current_bound, max_l[i - 1]);
        
        int sum_val = prefix_sum[i - 1];
        if (current_bound > 0) {
            sum_val = (sum_val - prefix_sum[current_bound - 1] + MOD) % MOD;
        }
        
        dp[i] = sum_val;
        prefix_sum[i] = (prefix_sum[i - 1] + dp[i]) % MOD;
    }
    
    cout << (1LL * dp[n] * 2) % MOD << "\n";
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
