#include<iostream>
using namespace std;

int main(){
	int n, h;
	int a[1001];
	cin>>n>>h;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int res=0;
	
	for(int i=0; i<n; i++){
		if(a[i] <= h){
			res+=1;
		}
		else{
			res+=2;
		}
	}
	
	cout<<res;
}
