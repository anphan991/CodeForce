#include <bits/stdc++.h>
using namespace std;

struct PairHash {
    size_t operator()(const pair<int,int>& p) const noexcept {
        return ( (uint64_t)p.first << 21 ) ^ (uint64_t)p.second;
    }
};

struct Triple {
    int a,b,c;
    bool operator==(const Triple& o) const { return a==o.a && b==o.b && c==o.c; }
};

struct TripleHash {
    size_t operator()(const Triple& t) const noexcept {
        uint64_t x = (uint64_t)t.a * 1000003ULL;
        uint64_t y = (uint64_t)t.b * 10007ULL;
        uint64_t z = (uint64_t)t.c;
        return (size_t)(x ^ (y<<1) ^ (z<<2));
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        unordered_map<pair<int,int>, long long, PairHash> cntYZ, cntXZ, cntXY;
        unordered_map<Triple, long long, TripleHash> cntXYZ;

        long long ans = 0;

        for(int j=0; j <= n-3; j++){
            int x = a[j], y = a[j+1], z = a[j+2];

            long long same = cntXYZ[{x,y,z}];

            ans += (cntYZ[{y,z}] - same);
            ans += (cntXZ[{x,z}] - same);
            ans += (cntXY[{x,y}] - same);

            cntYZ[{y,z}]++;
            cntXZ[{x,z}]++;
            cntXY[{x,y}]++;
            cntXYZ[{x,y,z}]++;
        }

        cout << ans << "\n";
    }
    return 0;
}

