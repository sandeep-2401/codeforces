#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
 
        if(abs(a-b)>abs(a+c-b)){
            cout<<abs(a-b)<<endl;
        }
        else{
            cout<<abs(a+c-b)<<endl;
        }
    }
}