//File name:Oath of the Night's Watch
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:768A
//Description: constructive algorithm, sorting(*900)
//Last Changed:08-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    vector<ll>a(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    
    sort(a.begin(),a.end());

    // if there is exactly one element or all the elements in the array
    // are equal than the answer is directly 0
    // case-I 
    // 1
    // 1

    // case-II
    // 100000
    // 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 10000000...
    
    if(n==1 || (a[0]==a[n-1])){
        cout<<"0";
        return;
    }

    int freq_1=0,freq_2=0;
    for (int i = 0; i < n; i++){
        if(a[i]==a[0])freq_1++;
        else break;
    } 
    for (int i = n-1; i >=0; i--){
        if(a[i]==a[n-1])freq_2++;
        else break;
    } 
    
    cout<<a.size()-freq_1-freq_2;
}


// the frequency freq_1 and freq_2 can be calculated in another way as well O(logn)
// int freq_1=upper_bound(a.begin(),a.end(),a[0]-a.begin());;
// int freq_2=lower_bound(a.begin(),a.end(),a[n-1]);

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}