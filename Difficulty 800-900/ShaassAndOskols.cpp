#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int m;
	cin>>m;
	
	for(int i=0; i<m; i++){
		int x,y;
		cin>>x>>y;
		
		int trai= y-1;
		int phai = a[x-1] -y;
		
		if(x>1){
			a[x-2]+=trai;
		}
		if(x<n){
			a[x] +=phai;
		}
		
		a[x-1] =0;
	}
	
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
}
