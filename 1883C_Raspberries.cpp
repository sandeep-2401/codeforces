#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,k,mini,even=0;
        cin>>n>>k;
        mini=k-1;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            temp=temp%k;
            if(k==4 && temp%2==0) even++;
            if(temp==0) {
                mini=0;
            }
 
            mini=min(mini,k-temp);
        }
        if(k==4 && even>=2) mini=0;
        else if(k==4 && even>=1 && n-even>=1) mini=min(mini,1);
        else if(k==4 && n-even>=2) mini=min(mini,2);
        cout<<mini<<endl;
    }
}