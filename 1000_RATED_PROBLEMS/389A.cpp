//Problem name:Fox and Number Game
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:389A
//Description:greedy,math(*1000)
//Last Changed:11-08-2026
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    bool flag=true,flag_1=false;

    // if there is 1 in the array then all other number 
    // can be  brought down to 1 whose sum is simply n
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i]==1)flag_1=true;
    }

    sort(a.begin(),a.end());

    // if all the elements in the array is equal then 
    // the sum is simply n*(any one element in the array)
    for (int i = 1; i < n; i++)
    {
        if(a[i]!=a[i-1])flag=false;
        
    }

    if(flag){
        cout<<a[0]*n;
        return;
    }else if(flag_1){
        cout<<n;
        return;
    }
    
    while (true)
    {
        sort(a.begin(),a.end());
        int diff=0;
        // modify the array with the given condition
        for (int i = n-1; i >0; i--)
        {
            if(a[i]>a[i-1]){
                a[i]=(a[i]-a[i-1]);
                diff++;
            }
        }
        
        // then check whether all the elements are equal or not 
        if(diff==0)break;
        else continue;
    }
    
    cout<<a[0]*n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; //cin >> t;
    while (t--) solve();
}