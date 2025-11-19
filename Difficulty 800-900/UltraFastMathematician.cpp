#include<iostream>
using namespace std;
int main(){
	string a,b;
	cin>>a;
	cin>>b;
	int n=a.size();
	
	for(int i=0; i<n; i++){
		if(a[i] != b[i]){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}	
}
