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
    ll i=0,j=n-1,maxi=n,mini=1;
    while(i<=j){
        if(arr[i]==maxi){
            i++;
            maxi--;
        }
        else if(arr[i]==mini){
            i++;
            mini++;
        }
         else if(arr[j]==maxi){
        j--;
            maxi--;
        }
        else if(arr[j]==mini){
            j--;
            mini++;
        }
        else{
            break;
        }
    }
    if(i<j){
        cout<<i+1<<" "<<j+1;

    }
   else cout<<-1;

   cout<<endl;
   return ;


    }
  

int main() {
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
    }
 