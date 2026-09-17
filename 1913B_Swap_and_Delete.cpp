#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
 
        int ones =0,zeros =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ones++;
            }
            else{
                zeros++;
            }
        }
 
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(zeros){
                    zeros--;
                }
                else{
                    break;
                }
            }
            else{
                if(ones){
                    ones--;
                }
                else{
                    break;
                }
            }
        }
 
        cout<< zeros+ones<<endl;
 
    }
 
}