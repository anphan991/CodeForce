#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;

        int first8 = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '8'){
                first8 = i + 1;
                break;
            }
        }

        if(first8 == -1){
            if(abs(x) + abs(y) <= n)
                cout << "YES\n";
            else
                cout << "NO\n";
            continue;
        }

        long long p = first8 - 1; 
        long long q = n - p;      

        bool ok1 = (abs(x) + abs(y) <= p + q);
        bool ok2 = (max(abs(x), abs(y)) <= q);

        if(ok1 && ok2) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

