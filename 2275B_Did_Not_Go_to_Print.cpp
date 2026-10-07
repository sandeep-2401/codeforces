#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
 
        string s;
        cin>>s;
 
        stack<int> st;
        vector<int> ans(n,-1);
        // string final ="";
        
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                st.push(i);
            }
            else if(s[i]=='2'){
                if((!st.empty())){
                    ans[st.top()]=1;
                    st.pop();
                }
                else{
                    ans[i]=1;
                }
            }
            else{
                ans[i]=1;
            }
        }
 
        int count = 0;
        for(int i =0;i < n;i++){
            if (ans[i] == -1)
                count++;
        }
 
        cout<<count<<endl;
 
        for(int i=0;i<n;i++){
            if(ans[i]==-1){
                cout<< i+1<<" ";
            }
        }
        
        cout<<endl;
 
    }
    return 0;
}