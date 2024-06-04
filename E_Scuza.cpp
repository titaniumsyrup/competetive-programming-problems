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
    ll n,q,sum=0;
    cin>>n>>q;
    ll arr[n],b[q];
    multimap<ll,ll> mp;
    vll pref(n);
    pref[0]=0;


    for(ll i=0;i<n;i++) {
        cin>>arr[i];
         if(i>0) pref[i]=pref[i-1]+arr[i];
         if(i==0) pref[0]=arr[i];
        }
        


    for(ll i=0;i<q;i++) {
        cin>>b[i];
         mp.insert(make_pair(b[i],i));  
        }


    vll ans(q);
    ll i=0;


    for(auto it  = mp.begin();it!=mp.end();it++){
        while(i<n){
            sum=0;
            if(arr[i]>it->first){
                if(i-1>=0)sum=pref[i-1];
                else sum=0;
                ans[it->second]=sum;
                break;
            }
            i++;
        }
        if(i==n){
            ans[it->second]=pref[n-1];
        }
    }


    for(auto &val : ans){
        cout<<val<<" ";
    }
    

 
    }
 
int main() {
   ll t;
   cin>>t;
   while(t--){
    solve();
    cout<<endl;
   }
    }
 