#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int n,i=0,A=0,D=0;
    string s;
    cin>>n;
    cin>>s;
    while (n--)
    {
        if (s[i]=='A')
        {
            A+=1;     
        }else
        {
            D+=1;
        }
        i++;
        
    }
    if (A>D)
    {
        cout<<"Anton";
    }else if (D==A)
    {
        cout<<"Friendship";
    }else
    {
        cout<<"Danik";
    }   
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    

