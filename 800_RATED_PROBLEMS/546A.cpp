#include<bits/stdc++.h>
using namespace std;

int k,n,w;
int total_amo=0;
void solve(){
    cin>>k>>n>>w;
    
    for (int i = 1; i <= w; i++)
    {
        total_amo+=(i*k);
    }
    if (n<total_amo)
    {
        cout<<(total_amo-n);
    }else{
        cout<<"0";
    }
    
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int t=1;;
    while(t -- ) {
        solve();
    }

}    