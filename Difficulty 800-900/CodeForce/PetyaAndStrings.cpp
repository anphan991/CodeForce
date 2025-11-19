#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	string res1= s1;
	for (char &c1 : res1) c1 = tolower(c1);
	
	string res2= s2;
	for (char &c2 : res2) c2 = tolower(c2);
	
	int sum1=0, sum2=0;
	for(int i=0; i< res1.length(); i++){
		sum1+= (int)res1[i];
	}
	
	
	for(int i=0; i< res2.length(); i++){
		sum2+= (int)res2[i];
	}
	
	if(res1 < res2){
		cout<<"-1";
	}
	else if(res1 > res2){
		cout<<"1";
	}
	
	else{
		cout<<"0";
	}
}
