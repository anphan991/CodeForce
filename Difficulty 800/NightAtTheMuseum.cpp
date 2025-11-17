#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int dis=0;
	char current='a';
	int tong=0;
	
	for(char c : s){
		dis= abs(c -current);
		int xoay = min(dis, 26 - dis);
		tong += xoay;
		current = c;
	}

	cout<<tong;
}
