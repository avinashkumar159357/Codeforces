#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;
    while(t--){
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i+=1;
            }
        
        }
    
    }
    cout<<s;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


