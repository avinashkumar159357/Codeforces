#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int i=0,j=n-1;
    while (i<=j)
    {
        if (s[i]==s[j])
        {
            break;
        }
        else if (s[i]!=s[j])
        {
            i++;
            j--;
        }  
    }
    
    cout<<j-i+1<<"\n";    
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    


