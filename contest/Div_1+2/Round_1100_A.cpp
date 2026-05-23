//Problem name:Slimes on a Line
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2229A
//Description:contest
//Last Changed:23-5-2026
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool flag2=true;
    for (int i = 1; i < n; i++)
    {
        if(a[i]!=a[i-1]){
            flag2=false;
        }
    }
    if(flag2) {
        cout<<"0\n";
        return;
    }

    
    int mini = *min_element(a.begin(), a.end());
    int maxi = *max_element(a.begin(), a.end());

    int x = (mini + maxi) / 2;

    int count = 0;

    while (true) {
        for (int i = 0; i < n; i++) {
            if (a[i] < x) a[i]++;
            else if (a[i] > x) a[i]--;
        }
        count++;
        bool flag = true;

        for (int i = 1; i < n; i++) {

            if (a[i] != a[i - 1]) {
                flag = false;
                break;
            }
        }
        if (flag)
            break;
    }

    cout << count << "\n";
}

int main() {

    fastio;

    int TC;
    cin >> TC;

    while (TC--) {
        solve();
    }
}