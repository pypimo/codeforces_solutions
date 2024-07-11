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
            ll n,x,tot=0;
            cin >> n >> x;
            map<ll,ll> l,r;
            for (int i=1; i<=n; i++) {
                cin >> a[i];
                tot+=a[i];
                if (tot && !l.count(tot)) l[tot]=i;
            }
            if (tot<x) cout << "-1\n";
            else {
                tot=0;
                for (int i=n; i>=1; i--) {
                    tot+=a[i];
                    if (tot && !r.count(tot)) r[tot]=n+1-i;
                }
                ll ans=INT_MAX, diff=tot-x;
                for (int i=0; i<=diff; i++) {
                    ans = min(ans,l[i]+r[diff-i]);
                    //cout << l[i] << " " << r[diff-i] << " " << ans << '\n';
                }
                cout << ans << '\n';
            } 
        }
        return 0;
    }
