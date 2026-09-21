#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
        int ans = n;
        string s;
        cin >> s;
 
        int ones = 0;
        int zeros = 0;
 
        for(char c : s)
            if (c == '0')
                zeros++;
 
        for(int i = 0; i < n; i++) {
            if(s[i] == '0')
                zeros--;
            else
                ones++;
 
            ans = min(ans, ones + zeros);
        }
 
        if(s[0] == '1') {
            ans = 0;
            for(int i = 1; i < n; i++)
                if(s[i] == '0')
                    ans++;
        }
 
        cout << ans << '\n';
    }
}