#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
		for(int i=0; i<n; i++){
			int mn=a[i];
			int pos=-1;
			
			for(int j=i+1; j<n; j++){
				if(a[j] <mn){
					mn=a[j];
					pos=j;
				}
			}
			
			if(pos!=-1){
				reverse(a.begin()+i, a.begin()+1+pos);
				break;
			}
		}
		
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
