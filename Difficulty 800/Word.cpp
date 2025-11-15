#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int count_upper = 0, count_lower = 0;
	for(int i=0; i< s.size(); i++){
		if(isupper(s[i])){
			count_upper+=1;
		}
		else if(islower(s[i])){
			count_lower+=1;
		}
	}
	
	if(count_upper > count_lower){
		for(int i=0; i<s.size(); i++){
			s[i]= toupper(s[i]);
		}
	}
	
	else if(count_upper <= count_lower){
		for(int i=0; i<s.size(); i++){
			s[i]= tolower(s[i]);
		}
	}
	
	cout<<s;
}
