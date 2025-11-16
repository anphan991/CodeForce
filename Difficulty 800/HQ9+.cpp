#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	bool check= false;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] =='9'){
			check=true;
			break;
		}
		else{
			check=false;
		}
	}
	
	if(check==true){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
