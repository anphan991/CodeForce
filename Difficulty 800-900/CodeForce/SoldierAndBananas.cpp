#include<iostream>
using namespace std;

int main(){
	int k,n,w;
	cin>>k>>n>>w;
	
	int money= 0;
	
	for(int i=1; i <=w; i++){
		money +=k*i;
	}
	
	int res;
	if(n> money){
		res=0;
	}
	else{
		res= money-n;
	}
	cout<<res;
}
