#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,sum=0;
        cin>>n;
        vector<int> secmin;
        int firstmin = INT_MAX, secmini = INT_MAX;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<int> temp;
            for(int j=0;j<m;j++){
                int var;
                cin>>var;
                temp.push_back(var);
            }
            sort(temp.begin(),temp.end());
            firstmin = min(firstmin,temp[0]);
            secmini = min(secmini,temp[1]);
            secmin.push_back(temp[1]);
        }
        for(int i : secmin){
            sum+=i;
        }
        sum= sum-secmini+firstmin;
        cout<<sum<<endl;
    }
}