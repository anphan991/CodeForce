#include<iostream>
#include<set>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	
	set<char> str;
	
	for(char c : s){
		if(c>='a' && c<='z'){
			str.insert(c);
		}
	}
	
	cout<<str.size();
}
