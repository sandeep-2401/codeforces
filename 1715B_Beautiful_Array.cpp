#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,b,s;
		vector<long long>final;
		cin>>n>>k>>b>>s;
		long long mins=k*b;
		long long maxs=mins+(n*(k-1));
		if(s>=mins && s<=maxs){
			long long temp;
			if((mins+k-1)<=s){
				temp=(mins+k-1);
			}
			else{
				temp=mins;
			}
			final.push_back(temp);
			s-=temp;
			for(int i=1;i<n;i++){
				if(s>=0){
					if(s>(k-1)){
						temp=(k-1);
					}
					else{
						temp=s; 
					}
					final.push_back(temp);
					s-=(temp);
				}
				else{
					final.push_back(0);
				}
			}
			reverse(final.begin(),final.end());
			for(auto nums:final){
				cout<<nums<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}
 