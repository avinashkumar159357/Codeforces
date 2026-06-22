//Problem name:Sasha and His Trip
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1113A
//Description:dp,greedy,math(*900)
//Last Changed:22-06-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,v; cin>>n>>v;

    //if the distance to travelled is less than or equal to capacity of tank
    if((n-1)<=v){
        cout<<n-1;//we then fuel at the first city with the price of the fuel
        return;   //at the lowest that is one dollar per litre filling the tank with 
    }             //full capacity

    int fuel=0,distance=n-1,cost=0;
    for (int  i = 1; i <=n; i++)
    {
        int tank_to_be_filled=v-fuel; //this calculate fuel that is to be filled in the tank
        if(tank_to_be_filled!=0){
            cost+=i*tank_to_be_filled;  //this gets the cost if the tank has to be filled with i dollars per litre
            fuel+=tank_to_be_filled;//the tank is filled with fuel 
        }
        if(fuel==distance)break; //if the fuel in the vehicle is equal with the distance to be covered then there is no need to filled the tank anymore so break
        distance--; //distance decreases as we cross each city
        fuel--; // fuel decreases one litre every 1km of distance
    }
    
    
    cout<<cost;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; // cin>>t;
    while(t--) {
        solve();
    }

}    
