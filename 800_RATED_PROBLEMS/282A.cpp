#include<bits/stdc++.h>
#include<vector>
using namespace std;

int X=0,n;
string s;
void solve(){
    cin>>n;
    while(n--){
        cin>>s;
        if (s=="++X" || s=="X++")
        {
           X+=1;
        }
        else if (s=="--X" || s=="X--")
        {
           X-=1;
        }
    }
    cout<<X;   
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    

    int t=1;
    while(t--) {
        solve();
    }

}    