#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q,even=0,odd=0; cin>>n>>q;
    vector<long long>a(n),ans;
    long long sum=0;
    for (int i = 0; i < n; i++){ 
        cin>>a[i];
        sum+=a[i];
        if (a[i]%2==0)
        {
            even++;
        }else
        {
            odd++;
        }    
    }    
    int tp,x_j;
    while(q--)
    {
        cin>>tp>>x_j;
        if (tp==1)
        {
            sum+=odd*x_j;
            if (x_j%2!=0)
            {
                even+=odd; 
                odd=0;
            }   
        }else if(tp==0)
        {
            sum+=even*x_j;
            if (x_j%2!=0)
            {
                odd+=even;
                even=0;   
            } 
        }
        ans.push_back(sum);
    }
    for(auto x : ans) cout<<x<<"\n";
}
    
   

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--) {
        solve();
    }
}