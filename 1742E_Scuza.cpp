#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const ll maxN = 2e5+10;
ll ps[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll n,q,x, maxi=0;
        vector<ll> v, ind;
        cin >> n >> q;
        for (ll i=1; i<=n; i++) {
            cin >> ps[i];
            if (ps[i]>maxi) {
                maxi=ps[i];
                v.push_back(ps[i]);
                ind.push_back(i);
            }
            ps[i]+=ps[i-1];
        }
        while(q--) {
            cin >> x;
            ll find = upper_bound(v.begin(), v.end(), x)-v.begin();
            ll sz = v.size();
            if (find==sz) cout << ps[n] << " ";
            else cout << ps[ind[find]-1] << " ";
        }
        cout << '\n';
    }
    return 0;
}
