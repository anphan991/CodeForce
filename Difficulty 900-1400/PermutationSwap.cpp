#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b){
	int r;
	while(b!=0){
		r=a %b;
		a=b;
		b=r;
	}
	return a;
}

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
		
		int g=0;
		
		for(int i=0; i<n; i++){
			if(a[i] != i+1){
				g= gcd(g, abs(a[i] -(i+1)));
			}
		}
		
		
		cout<<g<<endl;
	}
}

