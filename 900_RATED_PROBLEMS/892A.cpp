//File name:Greed
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:892A
//Description:greedy, implementation (*900)
//Last Changed:06-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    vector<ll>a(n),b(n);

    ll sum_of_remaining_cola=0;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        sum_of_remaining_cola+=a[i];
    }

    for (int i = 0; i < n; i++) cin>>b[i];

    sort(b.begin(),b.end());
    ll sum_of_largest_two_cans=b[n-1]+b[n-2];

    if(sum_of_remaining_cola<=sum_of_largest_two_cans)cout<<"YES";
    else cout<<"NO";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}