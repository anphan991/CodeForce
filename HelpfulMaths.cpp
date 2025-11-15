#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cmp(int a, int b){
	return a<b;
}

int main(){
	 string s;
	 vector<char>a;
	 
	 cin>>s;
	 
	 for(int i=0; i<s.length(); i++){
	 	if(isdigit(s[i])){
	 		a.push_back(s[i]);
		 }
	 }
	 int n= s.length();
	 
	 sort(a.begin(), a.end(), cmp);
	 
	 for(int i=0; i< a.size(); i++){
	 	cout<<a[i];
	 	if(i<a.size()-1){
	 		cout<<"+";
		 }
	 }
}



