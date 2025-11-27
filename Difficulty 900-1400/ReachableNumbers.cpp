#include<iostream>
#include<set>
using namespace std;

long long f(long long x){
	x++;
	while(x%10==0){
		x/=10;
	}
	return x;
}

int main(){
	int n;
	cin>>n;
	set<int>s;
	s.insert(n);
	
	while(true){
		int res=f(n);
		if(s.count(res)){
			break;
		}
		s.insert(res);
		n=res;
	}
	
	cout<<s.size();
}
