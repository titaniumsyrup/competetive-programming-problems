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
    ll n;
    cin >> n;
    char arr[n][n];
    
    for (ll i = 0; i < n; i++) {
       for(ll j=0;j<n;j++){
        cin>>arr[i][j];
       }
    }
    ll colc=n/2,rowc=n/2;
    ll count1,count0;
    ll sum=0;
    for (ll i = 0; i < rowc; i++) {
        for (ll j = 0; j < colc; j++) {
            count1 = 0, count0 = 0;
            if (arr[i][j] == '0') count0++;
            else if (arr[i][j] == '1') count1++;


            if (arr[n - 1 - j][i] == '0') count0++;
            else if (arr[n - 1 - j][i] == '1') count1++;


            if (arr[j][n - 1 - i] == '0') count0++;
            else if (arr[j][n - 1 - i] == '1') count1++;


            if (arr[n - 1 - i][n - 1 - j] == '0') count0++;
            else if (arr[n - 1 - i][n - 1 - j] == '1') count1++;

            if (count1 == count0) {
                sum += 2;
            } else if (count1 != 0 && count0 != 0) {
                sum++;
            }

        }
    }
    if(n%2!=0){
       
        ll i=n/2;
        for(ll j=0;j<n/2;j++){
             count0=0,count1=0;
            if(arr[i][j]=='0') count0++;
            else if(arr[i][j]=='1') count1++;


            if(arr[j][i]=='0') count0++;
            else if(arr[j][i]=='1') count1++;


            if(arr[i][n-1-j]=='0') count0++;
            else if(arr[i][n-1-j]=='1') count1++;
            
            
            if(arr[n-1-j][i]=='0') count0++;
            else if(arr[n-1-j][i]=='1') count1++;

            if(count1==count0){
                sum+=2;
            }
            else if(count1!=0 && count0!=0){
                sum++;
            }
        
        }
        
       
    }
    cout<<sum<<endl;

}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}