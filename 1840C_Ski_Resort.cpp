#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        long long total =0;
        cin>>n>>k>>q;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp<=q) arr[i]=1;
            else arr[i]=0;
        }
        int day=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                day++;
            }
            else{
                if(day>=k){
                    int l = day-k+1;
                    total+= ((l*(l+1))/2);
                }
                day=0;
            }
        }
        if(day>=k){
            long long l = day-k+1;
            total+= ((l*(l+1))/2);
        }
 
 
        cout<<total<<endl;
    }
}