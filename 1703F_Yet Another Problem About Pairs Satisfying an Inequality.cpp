    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    const ll maxN = 2e5+10;
    ll a[maxN], ps[maxN];
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        ll t;
        cin >> t;
        while(t--) {
            ll n, ans=0;
            cin >> n;
            for (int i=1; i<=n; i++) {
                cin >> a[i];
                ps[i]=ps[i-1];
                if (a[i]<i) {
                    ps[i]++;
                    ans += ps[a[i]-1];
                } 
            }
            cout << ans << '\n';
        }
     
        return 0;
    }
