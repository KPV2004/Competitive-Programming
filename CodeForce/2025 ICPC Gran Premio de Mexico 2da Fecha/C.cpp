#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define vin(name, len)    \
    vector<ll> name(len); \
    for (auto &_ : name)  \
        cin >> _;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    vin(arr, n);
    ll max = -1;
    for (int i = 0; i < n; i++)
    {
        int len = 0;
        ll start = arr[i];
        int index = i;
        int j = n - 1;
       
        while (index < n)
        {
            if (start == arr[j] && index != j)
            {
                len += (j - index + 1);
                // cout << j - index + 1 << " ";
                index = j + 1;
                if (index < n)
                {
                    start = arr[index];
                    j = n - 1;
                }
                else
                {
                    break;
                }
            }
            else if (index == j) {
                index = j + 1;
                 if (index < n)
                {
                    start = arr[index];
                    j = n - 1;
                }
                else
                {
                    break;
                }
            }
            else {
                j--;
            }
        }
        if(len > max) {
            max = len;
        }
        // cout << "\n";
    }
    if(max == 0) {
        cout << 1 << "\n";
        return 0;
    }

    cout << max%998244353 << "\n";

    return 0;
}