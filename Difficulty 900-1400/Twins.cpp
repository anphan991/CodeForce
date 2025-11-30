#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}
int main(){
	int tong=0;
	int lay=0;
	int count=0;
	int a[100];
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
		tong+=a[i];
	}
	
	sort(a, a+n, cmp);
	
	for(int i=0; i<n; i++){
		lay+=a[i];
		tong-=a[i];
		count++;
		
		if(lay > tong){
			break;
		}
	}
	
	cout<<count;
}
