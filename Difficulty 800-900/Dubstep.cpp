#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	string res="";
	int i=0;
	
	while(i < (int)s.size()){
		if(i+2 < (int)s.size() && s.substr(i,3)=="WUB"){
			if(!res.empty() && res.back() != ' '){
				res+=' ';
			}
			i+=3;
		} 
		else{
			res+=s[i];
			i+=1;
		}
	}
	cout<<res;
}
