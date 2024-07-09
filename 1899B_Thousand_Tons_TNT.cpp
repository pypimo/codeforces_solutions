    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
     
    const ll maxN = 150010;
    ll A[maxN], PS[maxN];
     
    int main() {
    	ios::sync_with_stdio(0);
    	cin.tie(0);	
     
    	ll t;
    	cin >> t;
     
    	while (t--) {
    		ll n, ans=0;
    		cin >> n;
    		for (ll i=1; i<=n; i++) {
    			cin >> A[i];
    			PS[i] = PS[i-1] + A[i];
    		}
    		for (ll k=1; k<n; k++) {
    			if (n%k) continue;
    			ll M = PS[k], m = PS[k];
    			for (ll i=2*k; i<=n; i+=k) {
    				M = max(M, PS[i]-PS[i-k]);
    				m = min(m, PS[i]-PS[i-k]);
    			}
    			ans = max(ans, M-m);
    			//cout << ans << "=" << M << "-" << m << '\n';
    		}
    		cout << ans << '\n';
    	}
     
    	return 0;
    }
