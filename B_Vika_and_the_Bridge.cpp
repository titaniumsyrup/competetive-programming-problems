//bs,two_pointer,greedy,Sorting,numbertheory,bit_masking
//dp

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
typedef vector<ll> vll;

void solve(){
    ll n,k,ans=INT_MAX;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    vll last(k,-1),max_step(k,0), max2_step(k,0);
    for(ll i=0;i<n;i++){
        ll jump=i-last[arr[i]-1];
        if(jump>max_step[arr[i]-1]){
            max2_step[arr[i]-1]=max_step[arr[i]-1];
             max_step[arr[i] - 1] = jump;
        }
        else if(jump>max2_step[arr[i]-1]){
            max2_step[arr[i]-1]=jump;
        }
        last[arr[i]-1]=i;
    }
     for (ll i = 0; i < k; ++i) {
           ll step = n - last[i];
            if (step > max_step[i]) {
                max2_step[i] = max_step[i];
                max_step[i] = step;
            } else if (step > max2_step[i]) {
                max2_step[i] = step;
            }
        }
     
        for (ll i = 0; i < k; ++i) {
            ans = min(ans, max((max_step[i] + 1) / 2, max2_step[i]));
        }
        cout<<ans-1<<endl;

}

int main() {
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
    }
 