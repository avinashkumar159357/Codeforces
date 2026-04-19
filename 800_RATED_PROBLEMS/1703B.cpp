#include<bits/stdc++.h>
using namespace std;//1399A
void solve(){
    int n,c=0; cin>>n;
    string s; cin>>s;

    unordered_set<char>seen;

    for (int i = 0; i < s.size(); i++)
    {
        if (seen.find(s[i])==seen.end())
        {
            c+=2;
            seen.insert(s[i]);
        }else
        {
            c+=1;
        }
    }
    cout<<c<<"\n";
    
}    


    int main() {
        ios :: sync_with_stdio(0);
        cin.tie(0);
        
        int t; 
        cin>>t;
        while(t--) {
            solve();
        }

    }    

