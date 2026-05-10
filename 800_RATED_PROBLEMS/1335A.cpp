//Problem name:Maximum GCD
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1370A
//Description:greedy,implementation,math,number theory(*800)
//Last Changed:29-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);
/*void solve() { // this is what i did by brute force approach 
    int n; cin>>n;// checking all the pair and gettting the maximum gcd
    int ans=0;     //but this gave TLE for larger value of n. o(n^2)
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n ; j++)
        {
            if(i!=j){
                int g=__gcd(i,j);
                ans=max(ans,g);
            }
        } 
    }
    cout<<ans<<"\n";
}*/
void solve() {
    ll n; cin>>n;
    cout<<n/2<<"\n";
}
/*Key Idea:
 from editorial
Answer for any n≥2 is equal to ⌊n/2⌋
Solution:

Let the maximum gcd be equal to g. Since the two numbers in a pair are distinct, one of them must be >g
 and both of them must be divisible by g. The smallest multiple of g, greater than g
, is 2⋅g. Since each number in the pair must be ≤n, we must have 2⋅g≤n, or g≤⌊n2⌋
. We can achieve g=⌊n2⌋, by choosing ⌊n/2⌋ and 2⋅⌊n/2⌋
.

Time Complexity: O(1)*/
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

    