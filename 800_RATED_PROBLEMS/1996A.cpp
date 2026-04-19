#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,animal_1,animal_2,rem; cin>>n;
    if (n<4)  cout<<n/2<<"\n";
    else if (n>=4)
    {
        animal_1=n/4;
        rem=n%4;
        if (rem==0) cout<<animal_1<<"\n";
        else
        {
            animal_2=rem/2;
            cout<<animal_1+animal_2<<"\n";
        }
    }
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    

