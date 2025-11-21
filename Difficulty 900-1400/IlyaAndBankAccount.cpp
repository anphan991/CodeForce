#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	if(n>=0){
		cout<<n;
	}
	
	else{
		int option1= n/10;
		int option2= (n/100)*10 + n%10;
	
		cout<<max(option1, option2);
	}
	
}
