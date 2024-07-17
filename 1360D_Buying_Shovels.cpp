#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin >> t;
	while(t--) {
		ll n,k;
		cin >> n >> k;
		ll ans=n;
		for (ll i=1; i<=min(k, (ll)sqrt(n)); i++) {
			if (n%i) continue;
			if (k>=n/i) {
				ans = min(i,ans);
			} else {
				ans = min(n/i,ans);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
