#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Query {
    int type;
    int l;
    int r;
    int original_idx; 
};

void solve() {
    int n, k, q;
    if (!(cin >> n >> k >> q)) return;

    vector<Query> queries(q);
    vector<bool> must_be_ge_k(n + 1, false);
    vector<bool> cannot_be_k(n + 1, false);

    vector<Query> type2_queries;

    for (int i = 0; i < q; ++i) {
        cin >> queries[i].type >> queries[i].l >> queries[i].r;
        queries[i].original_idx = i;

        if (queries[i].type == 1) {
            for (int j = queries[i].l; j <= queries[i].r; ++j) {
                must_be_ge_k[j] = true;
            }
        } else {
            type2_queries.push_back(queries[i]);
            for (int j = queries[i].l; j <= queries[i].r; ++j) {
                cannot_be_k[j] = true;
            }
        }
    }

    sort(type2_queries.begin(), type2_queries.end(), [](const Query &a, const Query &b) {
        return a.r < b.r;
    });

    int LARGE_VAL = 1000000000;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; ++i) {
        if (must_be_ge_k[i]) {
            if (cannot_be_k[i]) {
                a[i] = LARGE_VAL;
            } else {
                a[i] = k;
            }
        } else {
            a[i] = LARGE_VAL;
        }
    }

    for (int val = 0; val < k; ++val) {
        int last_placed_pos = -1;

        for (const auto& qry : type2_queries) {
            int L = qry.l;
            int R = qry.r;

            if (last_placed_pos >= L) {
                continue;
            }
            
            bool placed = false;
            for (int j = R; j >= L; --j) {
                if (!must_be_ge_k[j] && a[j] == LARGE_VAL) {
                    a[j] = val;
                    last_placed_pos = j;
                    placed = true;
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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
