//File name:Mislove Has Lost an Array
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1204B
//Description:math,greedy(*900)
//Last Changed:07-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,l,r; cin>>n>>l>>r;
    vector<int>a(n),b(n);
    int min_sum=1,max_sum=1;
    a[0]=1;
    l--;
    // calculate the minimal sum
    for (int i = 1; i < n; i++)
    {
        if(l!=0){
            a[i]=a[i-1]*2;
            l--;
        }
        else a[i]=1;
        min_sum+=a[i];
    }
     
    b[0]=1;
    int last=b[0];
    r--;
    // calculate the maximal sum
    for (int i = 1; i < n; i++)
    {
        if(r!=0){
            b[i]=b[i-1]*2;
            r--;
            last=b[i];
            max_sum+=b[i];
        }else max_sum+=last;
    }
    
    
    cout<<min_sum<<" "<<max_sum;
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}