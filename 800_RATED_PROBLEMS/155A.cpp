#include<bits/stdc++.h>
using namespace std;

void solve(){   
    int n; cin>>n;
    vector<int>p(n);

    for( int i=0 ; i < n ; i++)  cin>>p[i];

    int max=p[0],c=0;
    int min=max;

    for (int i = 1; i < n; i++)
    {
        if (p[i]>max)
        {
            max=p[i];
            c+=1;
        }
        if (p[i]<min)
        {
            min=p[i];
            c+=1;
        }    
    }
    cout<<c;
}
        
       
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
            solve();
        }
    }    

