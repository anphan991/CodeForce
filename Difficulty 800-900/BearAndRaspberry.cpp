#include<iostream>
using namespace std;

int main(){
	int n,c;
	cin>>n>>c;
	int a[100];
	
	int res, max=0;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(int i=0; i<n-1; i++){
		if(a[i] - a[i+1] -c > max){
			max = a[i] - a[i+1] -c;
		}
	}
	cout<<max;
}
