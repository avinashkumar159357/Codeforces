#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s;
    cin>>s;
    vector<int>a(n);
    
    for(char ch : s){
        a.push_back(ch-'a'+1);   //question says lowercase letters only 
                                //so we can apply this methof of getting the ASCII
    }                           //values and get the greatest ASCII value which gives 
    int temp=*max_element(a.begin(),a.end());//the amount of alphabet letters she need to learn
    cout<<temp<<"\n";            //to write the given string

    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    


