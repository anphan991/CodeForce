#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int>> a(n, vector<int>(3));
	for(int i=0; i<n; i++){
		for(int j=0;j<3 ; j++){
			cin>>a[i][j];
		}
	}

	
	int count=0;
	for(int i=0; i<n; i++){
		int sum=0;
		for(int j=0; j<3; j++){
			sum+=a[i][j];
		}
		if(sum>=2){
			count++;
		}
	}
	cout<<count;
}