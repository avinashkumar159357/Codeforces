#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;

void solve(){
    vector<int> arr1(5);
    bool present;
    int s=0;

    for (int i = 0; i < 5; i++)
    {
        cin>>arr1[i];
    }
    set<int> st;
    
    for (int i = 0; i < 5; i++)
    {
        if(i!=4)
            for (int j = arr1[i]; j <= arr1[4]; j=j+arr1[i])
            {
                st.insert(j);
            }
    }
    cout<<st.size();
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


