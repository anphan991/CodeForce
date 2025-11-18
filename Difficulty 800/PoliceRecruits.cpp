#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int p=0, count=0;
	
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		
		if(x==-1){
			if(p>0){
				p--;
			}
			else{
				count++;
			}
	}
		else{
			p+=x;
		}
}
	cout<<count;
	
}
