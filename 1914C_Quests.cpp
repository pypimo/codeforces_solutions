    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long 
     
    const ll maxN= 2e5+10;
    ll a[maxN], b[maxN];
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        ll t;
        cin >> t;
        while(t--) {
            ll n, k;
            cin >> n >> k;
            for (int i=0; i<n; i++) {
                cin >> a[i];
            }
            ll ans=0, s=0, multi;
            for (int i=0; i<n; i++) {
                cin >> b[i];
                if (i) b[i] = max(b[i-1], b[i]);
            }
     
            for (int i=0; i<n; i++) {
                s += a[i];
                
                if (k>=i+1) {
                    multi = (k-i-1)*b[i];
                    ans = max(ans, s+multi);
                }
            }
            cout << ans << '\n';
        }
     
        return 0;
    }
