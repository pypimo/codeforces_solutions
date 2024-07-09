    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long 
     
    const ll maxN= 1e5+10;
    ll a[maxN], b[maxN];
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        ll t,z;
        cin >> t;
        while(t--) {
            ll n,q;
            map<ll, ll> m;
            cin >> n >> q;
            for (ll i=0; i<n; i++) {
                cin >> a[i];
                b[i]=0;
            }
            ll start=INT_MAX;
            while(q--) {
                ll x;
                cin >> x;
                if (x<start) {
                    z =pow(2ll,x-1ll); 
                    m[x]+=z;
                    start=x;
                }
            }
            for (int i=0; i<n; i++) {
                for (auto x : m) {
                    z = pow(2ll,x.first);
                    if (a[i]%z==0) b[i]+=x.second;
                    else break;
                }
            }
            for (ll i=0; i<n; i++) {
                cout << a[i]+b[i] << " ";
            }
            cout << "\n";
        }
     
        return 0;
    }
