#include<bits/stdc++.h>
using namespace std;//1399A
void solve(){
    string s; getline(cin,s);
    unordered_set<char>st;

    for(char c: s){
        if (isalpha(c))
        {
            st.insert(c);
        }
    }
    cout<<st.size();
    
    
}    


    int main() {
        ios :: sync_with_stdio(0);
        cin.tie(0);
        
        int t=1; 
        //cin>>t;
        while(t--) {
            solve();
        }

    }    

