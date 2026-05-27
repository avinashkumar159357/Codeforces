//Problem name:Dominant Piranha
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:Uva 1433C
//Description:constructive algorithm ,greedy (*900)
//Last Changed:27-5-2026
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    bool flag =false;
    for (int  i = 0; i < n; i++) cin>>a[i];

    // we take the maximum element first because this pirahna is the optimal choice
    // but there could be many maximum multiple 

    int maxi=*max_element(a.begin(),a.end());
    int ind=0;

    // so now we check which maximum multiple has an adjacent element less than
    // itself and that will be one of the correct answer . thats it...

    for (int i = 0; i < n; i++)
    {
        if(i==0){  //checking for first element separately because it has only one adjacent side
            if(a[i]==maxi && a[i+1]<a[i]){
                ind=i;
                flag=true;
                break;
            }
        }else if(i==n-1){  //similarly for the last element
            if(a[i]==maxi && a[i-1]<a[i]){
                ind=i;
                flag=true;
                break;
            }
        }else{  // this case is for the rest of the element
            if((a[i]==maxi && a[i-1]<a[i]) || (a[i]==maxi && a[i+1]<a[i])){
                ind=i;
                flag=true;
                break;
            }
        }
        
    }
    if(flag)cout<<ind+1<<"\n";
    else cout<<"-1\n";
    

    
}

int main() {
    fastio;

    int TC;  cin >> TC;
    while (TC--) {
        solve();
    }
}