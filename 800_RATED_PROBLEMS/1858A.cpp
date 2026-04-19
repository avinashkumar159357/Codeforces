#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b,c,sum=0; cin>>a>>b>>c;
    if(a>b) cout<<"First\n";
    else if(a<b) cout<<"Second\n";
    else if(a==b){
        if(c%2==0) cout<<"Second\n";
        else cout<<"First\n";
    }
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
            
    int t; 
    cin>>t;
    while(t--) {
        solve();
    }

}    

