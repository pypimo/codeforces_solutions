    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    const ll m=998244353;
     
    ll multiply(ll a, ll b) {
        return (a%m*b%m)%m;
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        ll t;
        cin >> t;
        
        while(t--) {
            ll n,val,f=0,ct;
            cin >> n;
            for (ll k=2; k<=sqrt(n); k++) {
                val = k*k+k+1;
                ct = k*k;
                while(val<n) {
                    ct*=k;
                    val+=ct;
                }
                if (val==n) f=k;
            }
            if (!f) cout << "NO\n";
            else cout << "YES\n";
        } 
        
        return 0;
    }
