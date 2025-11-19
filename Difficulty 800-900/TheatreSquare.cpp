#include<iostream>
using namespace std;

int ucln(int a, int b){
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int n, m, a;
	cin>>n>>m>>a;
	
	int dt=n*m;
	int s= a*a;
	int res= ucln(dt,s);
	cout<<res;
}
