#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b,sum=0,max_cap=0;
    cin>>n;
    vector<int>v;
    while(n--){
        cin>>a>>b;
        int temp=sum;
        sum=(sum-a)+b;
        v.push_back(sum);
    }
    int m=*max_element(v.begin(),v.end());
    cout<<m;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


