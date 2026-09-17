#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> vis(26,0);
        int ans =0;
        int cnt=0;
 
        for(int i=0;i<n;i++){
            if(vis[s[i]-'a']==0){
                vis[s[i]-'a']=1;
                cnt++;
                ans+=cnt;
            }
            else{
                ans+=cnt;
            }
        }
 
        cout<<ans<<endl;
    }
}