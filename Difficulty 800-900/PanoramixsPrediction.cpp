#include<iostream>
#include<cmath>
using namespace std;

bool snt(int a){
	if(a==2){
		return true;
	}
	if(a<2){
		return false;
	}
	
	for(int i=2; i<= sqrt(a); i++){
			if(a%i==0){
				return false;
			}
		}
	return true;
}


int main(){
	int n,m;
	cin>>n>>m;
	bool check= true;
	for(int i=n+1; i<m; i++){
			if(snt(i)==true){
				check=false;
				break;
  			}
	}
	
	if(snt(m) && check==true){
		cout<<"YES";
	}

	
	else{
		cout<<"NO";
	}
}
