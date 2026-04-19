#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int temp =n+1;
    while(true){
        n=temp;
        set<int> st;//set stores all the digits form previous loop as well so we neet to put it here
        //so that every time it becomes an empty set.
        for (int i = 0; i < 4; i++)
        {
            int digit=n%10;
            st.insert(digit);
            n/=10;
        }
        if (st.size()==4)
        {
            cout<<temp;
            return;
        }
        temp++;   
    }
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


