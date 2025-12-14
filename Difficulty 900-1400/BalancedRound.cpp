#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> a(n);
		
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
		sort(a.begin(),a.end());
		
		int count=1, maxlen=1; 
		
		for(int i=1; i<n; i++){
			if(a[i] - a[i-1] <=k){
				count++;
			}
			else{
				count=1;
			}
			
			maxlen= max(maxlen, count);
		}
		
		cout<<n-maxlen<<endl;
	}
}
