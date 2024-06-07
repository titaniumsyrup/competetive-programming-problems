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

void solve() {
    ll n,s,ans=0;
    cin >> n>>s;
    ll arr[n];
    ll sum=0;

    for (ll i = 0; i < n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }

  ll s1=sum-s;

    if(s1<0){
        cout<<-1<<endl;
        return;
    }
    if(s1==0){
        cout<<0<<endl;
        return;
    }
   
    ll i=0,j=0,sum2=0;
    while(j<n){
      sum2+=arr[j];
      while(i<=j&&sum2>s){
        sum2-=arr[i];
        i++;
      }
      if(sum2==s){
        ans=max(ans,j-i+1);
      }
      j++;
     }
    cout<<n-ans<<endl;

}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}