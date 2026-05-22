//Problem name:Shifted MEX
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2185C
//Description:implementation ,sorting (*900)
//Last Changed:22-5-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

int mex_of_array(vector<ll> &a){
    int n=a.size();
    vector<bool> present(n+1,false);

    for (int x : a)
    {
        if((x>=0) && (x<=n)) present[x]=true;       
    }
    for (int i = 0; i<=n; i++) 
    {
        if(!present[i]) return i;
    }
    return n+1;
}
/*void solve(){     ///this is of o(n^2) because we are trying every value of
    int n; cin>>n; //the array and subtracting it with the elements in the array 
                //and taking the maximum after tring all the elements in the array
    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    int ans=0;

    for (int i = 0; i < n; i++)
    {
        vector<ll>b;
        for (int j = 0; j < n; j++)
        {
            b.push_back(a[j]-a[i]);
        }
        ans=max(ans,mex_of_array(b));
    }
    cout<<ans<<"\n";
}*/
void solve(){  //better approach O(nlogn)
    int n; cin>>n;
    set<ll>st;
    int x,count=1,mx=1;
    
    for (int i = 0; i < n; i++) {
        cin>>x;    
        st.insert(x);  //remove the duplicate and sort using set
    }
    vector<ll> v(st.begin(), st.end());//store it in a vector array

    for (int i = 1; i < v.size(); i++)
    {
        if(v[i]==v[i-1]+1)count++;  //now check for longest consecutive sequence
        //because even after subtracting any x from the elements of the array
        //the distance between all the elements remain the same so the maximum mex is 
        //the longest consecutive sequence
        else count=1; //if sequence breaks then reset count to 1
        mx=max(mx,count); //keep updating the mx
    }
    cout<<mx;
    cout<<"\n";
}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

    