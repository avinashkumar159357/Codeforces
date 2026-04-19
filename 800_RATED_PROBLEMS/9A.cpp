#include<bits/stdc++.h>
using namespace std;

void solve(){   
    int y,w,x,c=0; cin>>y>>w;
    x=max(y,w);
    while (x<7)
    {
        c++;
        x++;
    }
    if (c==5){
        cout<<"5/6";
    }else if(c<=3 ||c==6){
        cout<<(c/c)<<"/"<<(6/c);
    }else
    {
        cout<<"2/3";
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

 