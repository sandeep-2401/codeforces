#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> final(n);
		
		for(int i=0;i<n;i++){
			cin>>final[i];
		}
		
		map<long long,long long> mape;
		
		for(int i=0;i<n;i++){
			if(mape.find(final[i])!= mape.end()){
				mape[final[i]]++;
			}
			else{
				mape[final[i]]=1;
			}
		}
		int ind=1,cond=1;
		vector <int> finale;
		for(auto value:mape){
			if(value.second==1){
				cond=0;
				break;
			}
			else{
				int ftemp=ind+value.second;
				finale.push_back(ftemp-1);
				for(int i=ind;i<ftemp-1;i++){
					finale.push_back(i);
				}
				ind+=value.second;
			}
		}
		if(cond){
			for(auto it:finale){
				cout<<it<<" ";
			}
			cout<<endl;
		}	
		else{
			cout<<-1<<endl;
		}	
		
	}
}