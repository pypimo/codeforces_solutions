#include <bits/stdc++.h>
using namespace std;
#define ll long long 

// const ll maxN = 2e5+10;
// ll a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while(t--) {
        ll n,m,sum=0,sz,cnt=0;
        cin >> n >> m;
        vector<ll> v(m,0), diff;
        for (int i=0; i<m; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        diff.push_back(n-v[m-1]+v[0]-1);
        for (ll i=1; i<m; i++) {
            diff.push_back(v[i]-v[i-1]-1);
        }
        sort(diff.begin(), diff.end(), greater<ll>());
        sz = diff.size();
        for (ll i=0; i<sz; i++) {
            ll calc = diff[i]-2ll*cnt;
            if (calc>0) {
                sum += max(1ll, calc-1);
            } else break;
            cnt+=2;
            // if calc=1 left, then rest diff are 1 or 0
            // so need to worry about cnt
            // as no uninfected houses wil be left anyways
        }
        cout << n-sum << '\n';
    }
    return 0;
}
