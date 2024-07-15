#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    // we can flip a 1 bit to get a different number that x and y 
    // and then x|y = n 

    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v={n};
        for (int i = 0; i < 61; i++) {
            ll x = 1ll << i;
            if ((n & x) && n!=x) {
                // flip bit using xor
                v.push_back(n^x);
            }
        }

        cout << v.size() << "\n";
        reverse(v.begin(), v.end());
        for (auto x : v) cout << x << ' ';
        cout << '\n';
    }
    
    return 0;
}
