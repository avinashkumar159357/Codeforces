    #include<bits/stdc++.h>
    using namespace std;

    void solve(){
    long long a, b;
    cin >> a >> b;

    long long diff = abs(a - b);

    cout << (diff + 9) / 10 << "\n";  //ceil division:Example:
/*
diff = 23 → (23 + 9) / 10 = 32 / 10 = 3
diff = 20 → (20 + 9) / 10 = 29 / 10 = 2 

in acutal we need the minimum no of moves so at maximum add 
or subtract 10 at once so divide simply by 10 but then 
for test case a=13 ,b=42 :abs(a-b)=29/10 gives us 2 but then 
adding 10 two times gives us 20 only but 9 is still left
 thats why we use this ceil dividion where we add +9 to recognise the 
 move for number less than 10 so that it can be counted in the 
 total no of moves 

*/
}

    int main() {
        ios :: sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin>>t;
        while(t--) {
            solve();
        }

    }    

