#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a[5][5];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>a[i][j];
		}
	}
	
	int x=0, y=0;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(a[i][j]==1){
				x=i;
				y=j;
			}
		}
	}
	
	int res= abs(x-2)+ abs(y-2);
	cout<<res;
}
