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
    ll n,m;
    cin >> n>>m;
    ll arr[m];
    
    for (ll i = 0; i < m; i++) {
        cin>>arr[i];
    }
    if(n==m){
        cout<<n<<endl;
        return;
    }
    vector<ll> area;
    sort(arr,arr+m);
    for(ll i=1;i<m;i++){
        area.push_back(arr[i]-arr[i-1]-1);
    }
    area.push_back(n-arr[m-1]+arr[0]-1);
    
    sort(area.begin(),area.end(),greater<int>());
    ll sum=0;
    for(ll i=0;i<area.size();i++){
      if(area[i]-2*(2*i)<=0) break;
      sum+=area[i]-2*(2*i)-1;
      if(area[i]-2*(2*i)-1==0) sum++;
    }
    if(sum!=0)cout<<n-sum<<endl;
    else cout<<n-1<<endl;

}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}