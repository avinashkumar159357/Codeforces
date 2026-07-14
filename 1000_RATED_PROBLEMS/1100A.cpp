//File name:Roman and Browser
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1100A
//Description:implementation(*1000)
//Last Changed:14-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,k; cin>>n>>k;
    vector<int>a(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        unordered_set<int>st;
        int b=i+1,c=0;
        st.insert(b);

        int j=1;
        while (c<=n)
        {
            c=b+(j*k);
            st.insert(c);
            j++;
        }
        
        int l=-1;
        while (c>=1)
        {
            c=b+(l*k);
            st.insert(c);
            l--; 
        }

        int e=0,s=0;
        for (int i = 0; i < n; i++)
        {
            if(st.find(i+1)!=st.end())continue;
            else if(a[i]==-1)s++;
            else e++;
        }
        
        int max_diff=e-s;
        max_diff= (max_diff < 0) ? -max_diff : max_diff;
        
        ans=max(ans,max_diff);
    }

    cout<<ans;
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}

