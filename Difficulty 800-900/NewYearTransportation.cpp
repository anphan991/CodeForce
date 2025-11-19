#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n, t;
	cin>>n>>t;
	
	vector<int>a(n+1);
	for(int i=1; i<=n-1; i++){
		cin>>a[i];
	}
	int pos=1;
	bool check=true;
	
	while(pos<t){
		pos=pos+a[pos];
	}
	if(pos==t){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
