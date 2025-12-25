#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	
int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<long long> a(n);
	    for (int i = 0; i < n; i++) cin >> a[i];
	
	    sort(a.begin(), a.end());
	    a.erase(unique(a.begin(), a.end()), a.end()); 
	
	    long long g = 0;
	    for (int i = (int)a.size() - 1; i >= 0; i--) {
	        long long d = (i == 0 ? a[0] : a[i] - a[i - 1]);
	        if (d <= g) g = d - 1;
	        else g = d;
	    }
	
	    cout << (g ? "Alice\n" : "Bob\n");
	}
	return 0;
}

