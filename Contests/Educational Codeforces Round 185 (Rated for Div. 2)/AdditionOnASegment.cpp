#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long sum_b = 0;
    long long non_zero_count = 0;
    
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        sum_b += val;
        if (val > 0) {
            non_zero_count++;
        }
    }
    
    long long max_len_by_sum = sum_b - n + 1;
    
    cout << min(non_zero_count, max_len_by_sum) << "\n";
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
