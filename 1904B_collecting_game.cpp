    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long 
     
    const ll maxN= 1e5+10;
    ll a[maxN], ps[maxN], b[maxN], ans[maxN];
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        ll t, ind;
        cin >> t;
        while(t--) {
            ll n;
            cin >> n;
            for (ll i=0; i<n; i++) {
                ans[i]=0;
                cin >> a[i];
                b[i]=a[i];
            }
            sort(b, b+n);
            ps[0]=b[0];
            for (int i=1; i<n; i++) ps[i]=b[i]+ps[i-1];
     
            for (int i=n-1; i>=0; i--) {
                ind = upper_bound(b,b+n,ps[i])-b;
                ind--;
                ans[i] = max(ans[ind], ind);  
                //cout << ind << " ";
            }
            for (int i=0; i<n; i++) {
                ind = upper_bound(b,b+n,a[i])-b;
                cout << ans[ind-1] << " ";
            }
     
            cout << "\n";
        }
     
        return 0;
    }
