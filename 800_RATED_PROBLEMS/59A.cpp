#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<cctype>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int i=0,a=0,b=0;
    while (i<s.length())
    {
        if (isupper(s[i]))
        {
            a+=1;
        }else
        {
            b+=1;
        }
        i++;
    }
    if (a>b)
    {
        transform(s.begin(),s.end(),s.begin(), :: toupper);
    }else if (a<=b)
    {
        transform(s.begin(),s.end(),s.begin(), :: tolower);
    }
    cout<<s;    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


