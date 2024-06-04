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
    string arr;
    cin >> arr;
    map<ll, ll> remove;
    for (ll i = 0; i < n; i++) {
        if (arr[i] == '0') remove[i + 1] = 1;
    }
    ll sum = 0;
    auto it = remove.begin();


    it = remove.begin();
    while (it != remove.end()) {
        for (ll i = 1; (it->first)*i <= n; i++) {

            if (arr[(it->first)*i - 1] == '1') break;

            if (remove[(it->first)*i] == 1) {
                sum += it->first;
                remove[(it->first)*i] = 0;
            }
        }
        it++;
    }

    cout << sum << endl;

}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}