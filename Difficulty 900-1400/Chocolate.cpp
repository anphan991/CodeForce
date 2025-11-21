#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a[100];
	int b[100];
	int k=0;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	
	
	for(int i=0; i<n; i++){
		if(a[i]==1){
			b[k++]=i;
		}
	}
	
	if(k==0){
		cout<<0;
		return 0;
	}
	
	long long count=1;
	
	for(int i=0; i<k-1; i++){
		count*=(b[i+1] -b[i]);
	}
	
	cout<<count;
}
