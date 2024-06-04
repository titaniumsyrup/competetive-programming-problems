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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
}
int main() {
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
    }
 