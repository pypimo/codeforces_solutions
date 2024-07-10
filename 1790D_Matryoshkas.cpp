#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const ll maxN = 2e5+10;
ll a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll n,x;
        set<ll> s;
        cin >> n;
        map<ll,ll> freq;
        for (int i=0; i<n; i++) {
            cin >> x;
            freq[x]++;
            s.insert(x);
        }
        vector<ll> v(s.begin(), s.end());
        ll ans=0;
        for (auto x : v) {
            ll diff = freq[x]- freq[x-1];
            if (diff > 0) ans += diff;
            //cout << diff;
        }
        cout << ans << '\n';
    }

    return 0;
}
