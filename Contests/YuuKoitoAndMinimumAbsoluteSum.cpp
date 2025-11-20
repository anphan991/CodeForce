#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t!=0){
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
			if(a[0] == -1 && a[n-1] == -1){
				a[0] = 0;
				a[n-1]=0;
			}
			
			else if(a[0] == -1 ){
				a[0] = a[n-1];
			}
			
			else if(a[n-1] == -1){
				a[n-1]= a[0];
			}
			
			for(int i=0; i<n; i++){
				if(a[i] == -1){
					a[i]=0;
				}
			}
			
		
		int tong=abs(a[n-1] -a[0]);
		cout<<tong<<endl;
		
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		t--;
	}
}
