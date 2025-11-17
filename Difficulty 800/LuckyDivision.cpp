#include<iostream>
#include<vector>
using namespace std;

bool lucky_num(int a){
	if(a==4 || a==7){
		return true;
	}
	else{
	while(a != 0){
		if(a % 10 != 4 && a%10 !=7){
			return false;
			break;
			}
			a/=10;
		}
	}
	return true;
}


int main(){
	int n;
	cin>>n;
	int a[20];
	int k=0;
	for(int i=1; i<=1000; i++){
		if(lucky_num(i)){
			a[k]=i;
			k++;
		}
	}
	
	
	if(lucky_num(n)){
		cout<<"YES";
		return 0;
	}
	
	bool check=false;
	
	for(int i=0; i<k; i++){
		if(n%a[i]==0){
			check=true;
			break;
		}
	}
	
	if(check==true){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
