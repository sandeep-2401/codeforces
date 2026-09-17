#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,d;
	cin>>n>>d;
	vector <int> power;
	
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		power.push_back(a);
	}
	
	sort(power.rbegin(),power.rend());
	
	int count=0,ind=0,tot=0;
	
	while(n>0){
		int tc = ceil((double)d/power[ind]);
		if(tc*power[ind]==d) tc++;
		ind++;
		n-=tc;
		if(n>=0){
			count++;
		}
	}
	cout<<count<<endl;		
	
}