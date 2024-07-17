#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin >> t;
	while(t--) {
		ll n, fac=0,a,b,pro;
		cin >> n;
		for (a=2; a<=sqrt(n); a++) {
			if (n%a) continue;
			pro = n/a;
			for (b=a+1; b<=sqrt(pro); b++) {
				if (pro%b==0 && b*b!=pro) {
					fac=1;
					break;
				}
			}
			if (fac) break; 
		}
		if (!fac) cout << "NO\n";
		else cout << "YES\n" << a << " " << b <<" " << pro/b << '\n';
	}
	return 0;
}
