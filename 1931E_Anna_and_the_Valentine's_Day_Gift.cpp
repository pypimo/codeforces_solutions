#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin >> t;
	while(t--) {
		// useful only when Anna removes zeroes
		// Sasha can protect zeroes like 1280 and 8 can be 12808 so anna cant remove this
		// thus sort numbers according to number of zerose
		// then sasha can protect zeroes at even indicies
		// finally if no of digits>=m-1 sasha wins
		
		ll n,m,dig=0, zeroes=0,x;
		vector<ll> v;
		cin >> n >> m;
		for (int i=0; i<n; i++) {
			cin >> x;
			while(x>=10 && x%10==0) {
				zeroes++;
				x/=10;
			}
			while(x>0) {
				dig++;
				x/=10;
			}
			if (zeroes) v.push_back(zeroes);
			zeroes=0;
		}
		sort(v.begin(), v.end(), greater<ll>());
		int ct=v.size();
		for (int i=1; i<ct; i+=2) {
			dig+=v[i];
		}
		//cout << v.size() << " " <<  dig << "\n";
		if (dig>=m+1) cout << "Sasha\n";
		else cout << "Anna\n";
	}	

	return 0;
}
