#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x=0,y=0; cin>>n;
    bool flag=false;
    string s;
    cin>>s;
    
   for(char ch: s){
        if (ch=='L') x-=1;
        else if (ch=='R')  x+=1;
        else if (ch=='U')  y+=1;
        else if (ch=='D')   y-=1;
        
        if (x==1 && y==1)
        {
            flag=true;
            break;
        }else
        {
            continue;
        }
    }
    if (flag) cout<<"YES"<<"\n";
    else  cout<<"NO"<<"\n";
     
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    


