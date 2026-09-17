#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> temp(n);
        for(int i=0;i<n;i++){
            int var;
            cin>>var;
            if(var%k == 0) temp[i]={k,i+1};
            else temp[i]={var%k,i+1};
        }
 
        sort(temp.begin(),temp.end(), [](auto a,auto b){
            if(a.first!= b.first)
                return a.first > b.first;
            return a.second<b.second;
        });
 
        for(auto i : temp){
            cout<<i.second<<" ";
        }
 
        cout<<endl;
    }
    
}