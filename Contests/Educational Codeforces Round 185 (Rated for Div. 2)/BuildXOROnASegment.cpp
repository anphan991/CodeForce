#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX_VAL = 4096; 
const int MAX_K = 13;     


int dp[MAX_VAL][MAX_K];

struct Query {
    int l, x, id;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    vector<vector<Query>> queries(n + 1);
    for (int i = 0; i < q; ++i) {
        int l, r, x;
        cin >> l >> r >> x;
        queries[r].push_back({l, x, i});
    }

    vector<int> ans(q);

    for (int v = 0; v < MAX_VAL; ++v) {
        for (int k = 0; k < MAX_K; ++k) {
            dp[v][k] = 0;
        }
    }

    for (int i = 1; i <= n; ++i) {
        int val = a[i];


        for (int k = 12; k >= 2; --k) {
            for (int v = 0; v < MAX_VAL; ++v) {
                int prev_idx = dp[v ^ val][k - 1];
                if (prev_idx > dp[v][k]) {
                    dp[v][k] = prev_idx;
                }
            }
        }

        
        dp[val][1] = i; 

        for (const auto& qry : queries[i]) {
            int result = 0;
            for (int k = 1; k <= 12; ++k) {
                
                if (dp[qry.x][k] >= qry.l) {
                    result = k;
                    break;
                }
            }
            ans[qry.id] = result;
        }
    }

    for (int i = 0; i < q; ++i) {
        cout << ans[i] << "\n";
    }

    return 0;
}
