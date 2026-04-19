#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,one=0,two=0,three=0;  cin>>n;
    vector<int>t(n);
    vector<vector<int>>pos(4);

    for (int  i = 0; i < n; i++)
    {
        cin>>t[i];
        if(t[i]==1) one++;
        else if(t[i]==2) two++;
        else three++;
    }
    int max_Team=(one<two && one<three)?one:(two<three)?two:three;

    for (int i = 0; i < n; i++) pos[t[i]].push_back(i+1);
    
    if (max_Team==0) cout<<"0";
    else
    {
        cout<<max_Team<<"\n";
        int k=0;
        while (max_Team--)
        {
            if(k>pos[1].size() || k>pos[2].size() || k>pos[3].size()) break;
            cout<<pos[1][k]<<" "<<pos[2][k]<<" "<<pos[3][k]<<"\n";
            k++;
        }   
    } 
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
            
    int t=1; 
    // cin>>t;
    while(t--) {
        solve();
    }

}    

