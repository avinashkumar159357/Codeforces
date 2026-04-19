#include<bits/stdc++.h>
using namespace std;
//#define int long long
void solve(){
    int n,k,sum_1=0,sum_2=0; cin>>n>>k;
    vector<int>a(n),b(n);
    bool flag=false;
    for(int i=0; i<n;i++) cin>>a[i];    
    for(int i=0; i<n;i++) cin>>b[i];

    while (k--)//aproach o(k*n*log(n))  due to repeated sorting ,not favourable for lagrer k and n
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[0]>=b[n-1]){
            flag=true;
            break;
        }else swap(a[0],b[n-1]);
    }
    if (flag)
    {
        for(int i=0; i<n;i++) sum_1+=a[i];
        cout<<sum_1<<"\n";
    }else
    {
        for(int i=0; i<n;i++) sum_2+=a[i];
        cout<<sum_2<<"\n";
    }
}

    
   

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t;  cin>>t;
    while(t--) {
        solve();
    }
}

//another approach O(n*k), favourable for larger k and n
while (k--)
{
    int minIdx = min_element(a.begin(), a.end()) - a.begin();
    int maxIdx = max_element(b.begin(), b.end()) - b.begin();

    if (a[minIdx] >= b[maxIdx]) break;

    swap(a[minIdx], b[maxIdx]);
}