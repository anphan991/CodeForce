#include<iostream>
#include<vector>

using namespace std;

int main(){
	string s;
	vector<char> a;
	cin>>s;
	
	for(int i=0; i<s.size(); i++){
		s[i]= tolower(s[i]);
	}
	
	string c;
	
	for(int i=0; i<s.size(); i++){
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i'&& s[i] != 'y'){
			a.push_back(s[i]);
		}
	}
	
	for(int i=0; i<a.size(); i++){
		cout<<"."<<a[i];
	}
}
