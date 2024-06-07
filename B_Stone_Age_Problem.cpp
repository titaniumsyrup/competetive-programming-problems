#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iomanip>
#include <map>
#include <deque>
#include <queue>
#include <utility>
using namespace std;
typedef long long ll;
typedef vector<long long> vll; 
void solve() {
    ll n,q;
    cin >> n>>q;
    ll arr[n];
    ll sum=0;
    map<ll,ll> mp;
    for (ll i = 0; i < n; i++) {
        cin>>arr[i];
        sum+=arr[i];
        mp[i+1]=arr[i];
    }
    
    ll t,i,x,v2=0;
    while(q--){
        cin>>t;
        if(t==1){ 
           cin>>i>>x;
           if(mp.count(i)>0){
            sum-=mp[i];
            sum+=x;
            mp[i]=x;
            }
            else{
                mp[i]=x;
                sum+=x;
                sum-=v2;
            }
         }
        else{
           cin>>x;
           sum=x*n;
           mp.clear();
           v2=x;
        }
        cout<<sum<<endl;
    }

}
int main() {
    ll t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
}