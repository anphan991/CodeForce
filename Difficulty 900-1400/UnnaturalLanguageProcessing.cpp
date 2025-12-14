#include<iostream>
using namespace std;

bool isVowels(char a){
	return a== 'a' || a=='e';
}

bool isConsonants(char a){
	return a== 'b' || a== 'c' || a== 'd';
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		
		int i=0; 
		string ans="";
		
		while(i<n){
			if(i +2 <n && isConsonants(s[i]) &&
				isVowels(s[i+1]) &&
				isConsonants(s[i+2]) &&
				(i+3==n || isConsonants(s[i+3]))){
					
					ans += s[i];
					ans+= s[i+1];
					ans+= s[i+2];
					i+=3;
				}
			
			else{
				ans += s[i];
				ans+= s[i+1];
				i+=2;
			}
			
			if(i<n){
				ans+='.';
			}
		}
		
		cout<<ans<<endl;
	}
}
