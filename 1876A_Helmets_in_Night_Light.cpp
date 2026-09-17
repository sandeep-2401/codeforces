#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,p,cpy;
        long long total =0;
        cin>>n>>p;
        cpy=n;
        vector<int> vec1(n);
        vector<int> vec2(n);
        vector <pair<int,int>> temp(n);
        for(int i=0;i<n;i++){
            cin>>vec1[i];
        }
        for(int i=0;i<n;i++){
            cin>>vec2[i];
        }
        for(int i=0;i<n;i++){
            temp[i]={vec2[i],vec1[i]};
        }
 
        sort(temp.begin(),temp.end(),[](pair<int,int> a, pair<int,int> b){
            if(a.first != b.first)
                return a.first < b.first;
            return a.second > b.second;
        });
 
        total+=p;
        cpy--;
 
        for(int i=0;i<n;i++){
            if(cpy==0) break;
            if(p<temp[i].first){
                total+= (1LL * p * cpy);
                cpy=0;
                break;
            }
            int rem = min(cpy,temp[i].second);
            total+=(1LL * temp[i].first * rem);
            cpy-=rem;
 
        }
        cout<<total<<endl;
    }
    
}