//Problem name:Pair of Topics
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1324D
//Description:binary search, data structure,sorting , two pointer  (*1400)
//Last Changed:27-5-2026
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<ll>a(n),b(n),d(n);
    
    for (int  i = 0; i < n; i++) cin>>a[i];
    for (int  i = 0; i < n; i++) cin>>b[i];

    // we can reconstruct (a[i]+a[j]>b[i]+b[j]) as ((a[i]-b[i])+(a[j]-b[j]))>0
    // which is (d[i]+d[j])>0 where d[i]=a[i]-b[i]  and d[j]=a[j]-b[j]
    // if we observe d[i] ,it is nothing but diffference 
    // so we calculate difference array
    
    for (int i = 0; i < n; i++)
    {
        d[i]=a[i]-b[i];
    }
    
    // now (d[i]+d[j])>0 seems familiar and can easily counted by two pointer 
    // technique but for that we need to sort first

    sort(d.begin(),d.end());
    
    int i=0,j=n-1;
    ll count=0;

    // one important thing we are doing below is count+=(j-i)
    // if (d[i]+d[j])>0 then everything between also works lets understand this with example
    // first test case  n=5 ,a=[4 8 2 6 2] ,b=[4 5 4 1 3] and then d=[0 3 -2 5 -1]
    // d after sorting d=[-2 -1 0 3 5]
    // for the first iteration where i=0,j=n-1=4 count becomes count+=j-1=4-0=4
    // ao there are 4 valid pairs between 0 and 4 (including them)
    // the 4 valid pairs for (d[i]+d[j])>0 are 0 and 4   (-2+5)>0
    //                                         1 and 4   (-1+5)>0
    //                                         2 and 4   (0+5)>0
    //                                         3 and 4   (3+5)>0
    // now all pairs with  5 are already counted in one line and we don't feel the need to
    // iterate over all i and j which can  go upto O(n^2)
    // now we decrease j-- , then j=3 which also pass the if condition and count =4 + 3(3-0)
    // similarly all the valid pairs are counted at once like we see above( this time for j=3 ie. 3)

    while (i<j)
    {
        if((d[i]+d[j])>0) {
            count+=(j-i);
            j--;
        }else i++;
    }
    cout<<count;
}

int main() {
    fastio;

    int TC=1;//  cin >> TC;
    while (TC--) {
        solve();
    }
}