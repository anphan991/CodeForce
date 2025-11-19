#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector<int> a(n+1, false);
	
	int p,x;
	cin>>p;
	for(int i=0; i<p; i++){
		cin>>x;
		a[x] =true;
	}
	
	int q;
	cin>>q;
	for(int i=0; i<q; i++){
		cin>>x;
		a[x]= true;
	}
	
	for(int i=1; i<=n; i++){
		if(!a[i]){
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	
	cout<<"I become the guy.";
	
}
