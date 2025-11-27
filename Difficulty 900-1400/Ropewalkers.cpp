#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	int x=a, y=b, z=c;
	if(x>y){
		swap(x,y);
	}
	if(y>z){
		swap(y,z);
	}
	
	if(x>y){
		swap(x,y);
	}
	
	int d1= max(0, d-(y-x));
	int d2= max(0, d-(z-y));
	cout<<d1+d2;
}
