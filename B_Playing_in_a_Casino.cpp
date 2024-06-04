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
ll gcd(ll a, ll b) {
    if (b > a) {
        return gcd(b, a);
    } 
    if (b == 0) 
    {return a;} 
    return gcd(b, a % b);}

void solve(){
    ll n,m;
    cin>>n>>m;
    ll card[n][m];
    vector<vector<int>> v(m);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>card[i][j];
             v[j].push_back(card[i][j]);
        }
    }
    ll sum=0;
    for( int j=0;j<m;j++){
        sort(v[j].begin(),v[j].end());
        ll i=n-1,k=0;
        for(auto &val: v[j]){
              sum= sum-val*i+val*k;
              k++;
              i--;          
        }
    }
    cout<<sum<<endl;
    
}
int main() {
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
    }
 