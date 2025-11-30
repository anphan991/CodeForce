#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		vector<int>b(n);
		
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
		for(int i=0; i<n; i++){
			cin>>b[i];
		}
		
		int temp;
		int max_a=-1;
		int max_b=-1;
		for(int i=0; i<n; i++){
			if(a[i] > b[i]){
				temp=b[i];
				b[i]=a[i];
				a[i]=temp;
			}
			
			if(a[i] > max_a){
				max_a=a[i];
			}
			if(b[i] > max_b){
				max_b=b[i];
			}		
		}
		
		cout<<max_a*max_b<<endl;
	
	}
}
