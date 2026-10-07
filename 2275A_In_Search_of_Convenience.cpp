#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=a-c;i<=a+c;i++){
            int d = (c*c)-((a-i)*(a-i));
            if(d<0) continue;
            int k = sqrt(d);
 
            if(k*k == d){
                int y = b + k;
                cout << i << " " << y << endl;
                break;
            }
        }
    }
    return 0;
}