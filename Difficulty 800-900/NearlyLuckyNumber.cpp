#include<iostream>
using namespace std;

int main(){
	long long n;
	cin>>n;
	bool check= true;
	int count =0;
	while(n!=0){
		if(n%10 == 4 || n%10==7){
			count++;
		}
		n/=10;
	}
	
	if(count !=4 && count !=7){
		cout<<"NO";
	}
	
	else{
		cout<<"YES";
	}
}
