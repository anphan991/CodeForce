#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t!=0){
		int n;
		cin>>n;
		
		int count=0;
		
		if(n%2 !=0){
			cout<<0<<endl;
		}
		
		else{
			cout<<(n/4) +1<<endl;
		}
		
		t--;
	}
}
