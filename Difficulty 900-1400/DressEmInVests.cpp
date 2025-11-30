#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	
	vector<int>a(n);
	vector<int>b(m);
	vector<pair<int,int>> res;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(int i=0; i<m; i++){
		cin>>b[i];
	}
	
	int count=0;
	
	int i=0, j=0;
	while(i<n && j<m){
		if(b[j] < a[i] -x){
			j++;
		}
		
		else if(b[j] > a[i] +y){
			i++;
		}
		
		else{
			res.push_back({i+1, j+1});
			i++;
			j++;
		}
	}
	
	cout<<res.size()<<endl;
	for(auto &p : res){
		cout<<p.first<<" "<<p.second<<endl;
	}
	
}

