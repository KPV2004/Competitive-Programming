#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define vin(name,len) vector<ll> name(len) ;for (auto & _ : name) cin >> _ ;
#define vout(name) for (auto &_: name) {cout << _ << " ";}cout << "\n";
#define sort_v(name) sort(name.begin(), name.end());

int main() {
    ll n , k;
    int count = 0;
    cin >> n >> k;
    vin(left_shoes,n);
    vin(right_shoes,n);
    sort_v(left_shoes);
    sort_v(right_shoes);
    for(int i = 0 ; i < n ; i++) {
        if(left_shoes[i] + right_shoes[i] <= k) {
            k = k - (left_shoes[i] + right_shoes[i]);
            count++;
        }
        else {
            break;
        }
    }
    cout << count << "\n";
    return 0;
}