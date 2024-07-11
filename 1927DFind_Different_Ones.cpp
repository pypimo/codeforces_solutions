    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    const ll maxN=2e5+10;
    ll a[maxN], ct[maxN];
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        ll t;
        cin >> t;
        
        while(t--) {
            ll n,q,l,r,ind;
            cin >> n;
            cin>>a[1];
            for (ll i=1;i<=n;i++) ct[i]=0;
            for (ll i=2; i<=n; i++) {
                cin >> a[i];
                if (a[i]!=a[i-1]) ct[i]++;
                ct[i]+=ct[i-1];
            }
     
            cin>> q;
            while(q--) {
                cin >> l >> r;
                ind=upper_bound(ct+1,ct+n+1,ct[l])-ct;
                if (ind>=l && ind<=r) cout << l << " " << ind << "\n";
                else cout << "-1 -1\n"; 
            }
            cout << "\n";
        }
     
        return 0;
    }
