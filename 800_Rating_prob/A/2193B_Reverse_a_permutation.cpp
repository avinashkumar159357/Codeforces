#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,i; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n ;i++) cin>>a[i];
    
    for (i = 0; i < n; i++) if(a[i]!=(n-i)) break;
    
    int max_idx=max_element(a.begin()+i,a.end())-a.begin();

    while (i<max_idx)
    {
        swap(a[i],a[max_idx]);
        i++;
        max_idx--;
    }
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    
}