#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxN = 4010;
ll a[maxN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin >> t;
	while(t--) {
		ll n,ans=0;
		cin >> n;
		vector<pair<ll, ll>> v; //B W
		v.push_back({0,0});
		for (int i=2; i<=n; i++) {
			cin >> a[i];
		}
		string s;
		cin >> s;
		for (int i=1; i<=n; i++) {
			ll b=0,w=0;
			if (s[i-1]=='B') b=1;
			else w=1;
			v.push_back({b,w});
		}
		
		for (ll i=n; i>=0; i--) {
			v[a[i]].first+=v[i].first;
			v[a[i]].second+=v[i].second;
		}
		for (ll i=1; i<=n; i++) {
			if (v[i].first==v[i].second) ans++;
		}
		cout << ans << '\n';
	}

	return 0;
}
