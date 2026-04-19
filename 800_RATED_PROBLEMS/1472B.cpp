    #include<bits/stdc++.h>
    using namespace std;

    void solve(){
    int one=0,two=0,n,sum=0,ele; cin>>n;
 
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        sum+=ele;
        if (ele==1) one++;
        else if(ele==2) two++;
    }
    int half_weight=0;
    if (sum%2==0)     //first check whether the weight is divisible into two part
    {
        while (half_weight< (sum/2))  //first we give half the weight to alice with the biggest
        {                             //weight contribution (2 g) and if still left to half the weight then we 
            int left=0;               //take 1 grams and give to alice 
            left=(sum/2)-half_weight;
            if(two!=0 && left>=2){   //main point is that if we can give half the weight to one person 
                two--;               //then surely the total weight can be distrubuted between alice and bob   
                half_weight+=2;
            }else if(one!=0 && left>=1)
            {
                half_weight+=1;
                one--;
            }else break;        
        }
        if (half_weight==(sum/2))
        {
            cout<<"YES"<<"\n";
        }else
        {
            cout<<"NO"<<"\n";
        }
    }else
    {
        cout<<"NO"<<"\n";
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

