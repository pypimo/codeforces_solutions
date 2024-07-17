#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	ll t;
	cin >> t;
	while(t--) {
		ll n,x,inc=0,dec=0, sum=0;
		cin >> n;
		vector<ll> st;
		cin>> x;
		st.push_back(x);
		for (int i=1; i<n; i++) {
			cin >> x;
			ll top = st.back();
			if (x>top && inc) {
				st.pop_back();
				st.push_back(x);
			} else if (x>top) {
				dec=0; inc=1;
				st.push_back(x);
			} else if (x<top && dec) {
				st.pop_back();		
				st.push_back(x);
			} else if (x<top) {
				dec=1; inc=0;
				st.push_back(x);
			}
		}
		cout << st.size() << '\n';
		for (auto x : st) cout << x << " ";
		cout << '\n';
	}
	return 0;
}
