#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>a(n);
		
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
		long long max_beauty=0, sum=0;
		
		for(int i=0; i<n; i++){
			max_beauty += (a[i] + k - 1) / k ;
			sum += a[i];
		}
		long long min_beauty = (sum+k -1) /k;
		
		cout<<min_beauty<<" "<<max_beauty<<endl;
	}
}
