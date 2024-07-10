    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long 
     
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        ll t;
        cin >> t;
        while(t--) {
            
            ll n,m, ans=0, x;
            cin >> n >> m;
            ll a[m][n];
            for (ll i=0; i<n; i++) {
                for (ll j=0; j<m; j++) {
                    cin >> a[j][i];
                }
            }
            for (ll j=0; j<m; j++) {
                sort(a[j], a[j]+n);
                ll sum=0;
                for (ll i=0; i<n; i++) {
                    ans += a[j][i]*i - sum;
                    sum += a[j][i];
                }
            }
            cout << ans << '\n';
        }
     
        return 0;
    }
