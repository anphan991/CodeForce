#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	bool used[26] = {false};
	
	for(int i=0; i<n; i++){
		char c=s[i];
		if(c >='A' && c<='Z'){
			c+=32;
		}
		used[c-'a'] = true;
	}
	
	for(int i=0; i<26; i++){
		if(!used[i]){
			cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";
}
