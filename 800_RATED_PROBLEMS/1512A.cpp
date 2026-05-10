//File name: Spy Detected!
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1512A
//Description:brute force implementation(*800)
//Last Changed:10-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    int freq[101]={0};
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        freq[a[i]]++;  //counted the frequency of each element
    }
    int ind=0;
    for (int i = 0; i < n; i++)
    {
        if(freq[a[i]]==1){//look out for the element which is unique and get its index
            ind=i;
            break;
        }
    }
    cout<<ind+1<<"\n";  
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
