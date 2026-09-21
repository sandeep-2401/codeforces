#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int mini =n;
        vector<int> arr(3);
        for(int i=0;i<3;i++){
            cin>>arr[i];
            mini=min(mini,arr[i]);
        }
 
        cout<<n-mini<<endl;
    }
    
}