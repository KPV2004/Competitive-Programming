#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int l, r, k;
    int count = 0;
    bool found =false;
    cin >> l >> r >> k;
    while(l <= r) {
        if(l % k == 0) {
            if(!found) {
                found = true;
            }
        }
        if(found) {
            l+=k;
            count++;
        }
        else {
            l++;
        }

    }
    cout << count << "\n";
    return 0;
}
