#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    if (s2==s1)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


