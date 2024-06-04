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
    ll n;
    cin>>n;
    vll arr;
    ll sum=0;
    for(ll i=0;i<n;i++) {
        ll x;
        cin>>x;
        arr.push_back(x);
        if(i>0){
            sum+=abs(arr[i]-arr[i-1]);
        }
        }
        if(sum==0) {
            cout<<1<<endl;
            return;
        }
        n = unique(arr.begin(), arr.end()) - arr.begin();
        ll count=n;
        for(ll i=1;i<n-1;i++){
            if(arr[i]<arr[i+1]&&arr[i]>arr[i-1]) count--;
            else if(arr[i]>arr[i+1]&&arr[i]<arr[i-1]) count--;

        }
    
    cout<<count<<endl;
}
int main() {
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
    }
 