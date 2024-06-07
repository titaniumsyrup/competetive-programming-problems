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
    ll n,t;
    cin >> n;
     vector<ll> x(n), y(n);
    vector<ll> pos,neg;
    for (ll i = 0; i < n; i++) {
        cin>>x[i];
    }
    for (ll i = 0; i < n; i++) {
        cin>>y[i];
         t= y[i]-x[i];
        if(t>=0) pos.push_back(t);
        else neg.push_back(abs(t));
    }
    if(pos.size() >= 1)  sort(pos.begin(),pos.end());
    if(neg.size() >= 1) sort(neg.begin(),neg.end());
    
    ll i=pos.size()-1;
    ll j=neg.size()-1;
    ll count=0;
    while(i>=0&&j>=0){
        if(pos[i]>=neg[j]){
            count++;
            i--;
            j--;
        }
        else{
            j--;
        }
    }
    
        count+=(pos.size()-count)/2;
        cout<<count<<endl;
    


}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}