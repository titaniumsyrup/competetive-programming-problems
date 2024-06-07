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
    ll n;
    cin >> n;
    vll arr(n);
    std::vector<std::tuple<int, int, int>> ans;
    for (ll i = 0; i < n; i++) {
        cin>>arr[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    if(n>=2&&arr[n-2]>arr[n-1]){
        cout<<-1<<endl;
        return;
    }
    if(n==2) {
        cout<<0<<endl;
        return;
    }
    if(arr[n-1]<0){
         if (is_sorted(arr.begin(), arr.end())) {
                    cout << 0 << endl;
                } else {
                    cout << -1 << endl;
                }
    }
    else{
        cout<<n-2<<endl;
        for(ll i=0;i<n-2;i++){
            cout<<i+1<<" "<<n-1<<" "<<n<<endl;
        }
    }

}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}