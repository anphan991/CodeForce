#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n; 
		cin>>n;
		int a[105], freq[105]={0};
		
		for(int i=0; i<n; i++){
			cin>>a[i];
			freq[a[i]]++;
		}
		
		int del=0;
		
		for(int i=0 ; i<=n; i++){
			if(freq[i] ==0){
				continue;
			}
			
			if(i==0){
				del+=freq[i];
				continue;
			}
			
			if(freq[i] <i){
				del+=freq[i];
			}
			
			else{
				del+= min(freq[i], freq[i]-i);
			}
		}
		cout<<del<<endl;
		
	}
}
