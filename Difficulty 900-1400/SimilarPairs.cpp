#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[50];
		int n;
		cin>>n;
		
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
		sort(a, a+n);
		
		bool check=false;
		int count_chan=0, count_le=0;
		
		for(int i=0; i<n-1; i++){
			if(a[i+1] - a[i]==1){
				check=true;
				break;
			}
		}
		
		for(int i=0; i<n; i++){
			if(a[i] %2==0){
				count_chan++;
			}
			else{
				count_le++;
			}
		}
		
		if(check){
			cout<<"YES"<<endl;
		}
		
		else{
			if(count_chan%2==0 and count_le%2==0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
}
