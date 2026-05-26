//File name: . K-th Not Divisible by n
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1352C
//Description:binary search, math ,(*1200)
//Last Changed:26-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*void solve() { Approach -I 
    ll n,k; cin>>n>>k;

    // here if we imagine that there is no divisibility rules
    // then the kth positive integer is k itself 
    // now for eg. n=3 ,k=7
    // among numbers frm 1 to 7 there are multiples of 3 ie.3 and 6. this numbers are invalid 
    // so because 2 invalid number appear before 7 , we must move further right .
    // we want 7 valid numbers but only has (7-2)=5 valid numbers.so we need to shift ahead
    // IMP : for every multiple of n ,[ n, 2n, 3n, ...] one position get wasted.
    // so answer is : k + no of position wasted.   
    // getting deeper and lets see how many position are wasted?
    // for n==3 , [ 1 2 X | 4 5 X | 7 8 X |...]
    // Every block of n-1 is followed by one skipped number(waste)
    // so before reaching the kth valid number the count of skipped number becomes 
    // lower_bound((k-1)/(n-1))
    cout<<k+(k-1)/(n-1)<<"\n";
}*/

void solve(){ //  Approach-II
    ll n,k; cin>>n>>k;

    // we want the kth number that is not divisible by n
    // for n=3, k=7  [ 1 2 X | 4 5 X | 7 8 X |...] we remove multiples of 3
    // every group of n numbers contain n-1 valid number and 1 invalid number
    // so each block gives n-1 valid numbers ,in this case 2 valid numbers in one block
    // [1 2 | 4 5 | 7 8 | 10 ...]
    // 1st block =2 numbers
    // 2nd block =2 numbers
    // 3rd block =2 numbers
    // Total valid number is 6 so the next valid number (ie. 7th valid number) is 10
    // so no. of blocks of valid number is valid_blocks = k/(n-1).
    // Each block has length n so after q blocks we reach approximately valid_block * n
    // and now we only need how many extra valid number are still needed valid_remain = k % (n-1)
    // in case of n=3 ,k=7 only one valid number is left ie.10 (valid_remain=1)
    // SPECIAL CASE: if valid_remain=0, that means we stopped exactly at the end of 
    //               a valid block but the last number of the block is divisible by n
    //               so we subtract 1 ie.(valid_block*n)-1. is used in this case.

    ll valid_block=k/(n-1);
    ll valid_remain=k%(n-1);

    if(valid_remain==0) cout<<valid_block * n -1<<"\n";
    else cout<<valid_block * n + valid_remain<<"\n";

}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}

