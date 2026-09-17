#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		
		long long minpaira=1;
		long long minpairb=n-1;
		
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				minpaira=n/i;
				minpairb= n-minpaira;
				break;
			}
		}
		
		cout<<minpaira<<" "<<minpairb<<endl;
	}
}