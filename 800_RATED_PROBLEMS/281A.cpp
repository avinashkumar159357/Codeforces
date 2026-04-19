#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<cctype>
using namespace std;
    void solve(){
        string s,b;
        char c;
        cin>>s;
        
        
        for(int i=0 ; i<s.length(); i++){ //a little long
            if (i==0)
            {
                c=toupper(s[0]);
                b+=c;
            }else
            {
                b+=s[i];
            }   
        }
        cout<<b;   // instead of above for loop we can just
    }              //if(!s.empty())
                    //  s[0]=toupper(s[0])
int main() {        //cout<<s;
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();

    }
}    



