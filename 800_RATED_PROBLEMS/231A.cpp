#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int total_prob_solved=0;
int solve(){
    int p,v,t,count=0;
    cin>>p>>v>>t;
    if (p==1)               //at the beginning i came up with this
    {                       //simple if idea which ofcourse is lengthy
        count+=1;           //as i was scared about the term greedy in the tags 
    }                       //and not having much knowlegde about the greedy i just tried
    if (v==1)               //implementing the answer from the scratch
    {
        count+=1;
    }
    if (t==1)
    {
        count+=1;
    }
    if (count>=2)
    {
        total_prob_solved+=1;
    }
    return total_prob_solved;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t,s;
    cin>>t;
    while(t--) {
        s=solve();
    }
    cout<<s<<"\n";
}    

///////////////////////////////////////////////////////////////
//ALternative solution  (more shorter version)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int solved = 0;

    while(n--) {
        int p, v, t;
        cin >> p >> v >> t;

        if(p + v + t >= 2)
            solved++;
    }

    cout << solved << "\n";
}
