#include<iostream>
using namespace std;

bool check(int x){
	string s= to_string(x);
	return s[0] !=s[1] &&
			s[0] !=s[2] &&
			s[0] !=s[3] &&
			s[1] !=s[2] &&
			s[1] !=s[3] &&
			s[2] !=s[3];
}

int main(){
	int x;
	cin>>x;
	
	string y=to_string(x);
	
	while(true){
		x+=1;
		if(check(x)){
			cout<<x;
			break;
		}
	}
}
