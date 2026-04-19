#include<bits/stdc++.h>
using namespace std;

void solve(){
    int to_be_Eaten=0,n; cin>>n;
    vector<int>a(n);

    for (int i = 0; i < n; i++) cin>>a[i];

    sort(a.begin(),a.end());

    if (a.size()==1){  
        cout<<"0"<<"\n";
        return;
    }
    int min_Candy=a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i]!=min_Candy)
        {
            to_be_Eaten+=(a[i]-min_Candy);
        }
    }
    cout<<to_be_Eaten<<"\n";  
}    

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    


