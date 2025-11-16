#include<iostream>
using namespace std;

int main(){
	string s, t;
	cin>>s;
	cin>>t;
	bool check =true;
	
	if(s.size() != t.size()){
		cout<<"NO";
	}
	
	int n=s.size();
	
	for(int i=0; i<n; i++){
		if(s[i] != t[n-1-i]){
			check=false;
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
