#include <bits/stdc++.h>
using namespace std;

static const long long INF = 4000000000000000000LL;

long long safe_mul(long long a, long long b){
    if (a == 0 || b == 0) return 0;
    if (a > INF / b) return INF;
    return a * b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        long long best = INF;

        for(int p = 0; p <= n - 2; p++){
            vector<long long> nums;
            nums.reserve(n - 1);

            for(int i = 0; i < n; ){
                if(i == p){
                    long long x = (s[i]-'0')*10LL + (s[i+1]-'0');
                    nums.push_back(x);
                    i += 2;
                }else{
                    nums.push_back(s[i]-'0');
                    i++;
                }
            }

            int m = (int)nums.size();
            vector<long long> dp(m + 1, INF);
            dp[m] = 0;

            for(int i = m - 1; i >= 0; i--){
                long long prod = 1;
                for(int j = i; j < m; j++){
                    prod = safe_mul(prod, nums[j]);
                    dp[i] = min(dp[i], prod + dp[j + 1]);
                }
            }

            best = min(best, dp[0]);
        }

        cout << best << "\n";
    }
    return 0;
}

