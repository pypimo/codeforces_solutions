#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxN = 2e5+10;
ll a[maxN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n,sum=0,x;
	cin >> n;
	unordered_map<ll,ll> p, mp;

	// p for presence of a[i]
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		sum += a[i];
		p[a[i]]++;
	}
	
	// to check if removing a[i] we have an element except a[i] such that sum = element
	for (int i=1; i<=n; i++) {
		x = sum-2*a[i];
		if ((x==a[i] && p[a[i]]>1) || (x!=a[i] && p[a[i]])) mp[x]=1;
	}

	// answer indicies
	vector<ll> ans;
	for (int i=1; i<=n; i++) {
		if (mp[a[i]]) ans.push_back(i);
	}
	cout <<ans.size() << '\n';
	for (auto x : ans) cout << x << " ";
	

	return 0;
}
