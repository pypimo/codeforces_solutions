#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// edge case 
	// 1 9 10 9 10
	// if everything in one array then 2 
	// actual ans is 1

	ll tt;
	cin >> tt;
	while(tt--) {
		ll n, ans=0,x,y,z;
		cin >> n;
		vector<ll> arr[2];
		vector<ll> *s, *t;
		arr[0].push_back(INT_MAX);
		arr[1].push_back(INT_MAX);
		for (int i=1; i<=n; i++) {
			cin >> z;
			if (arr[0].back()<=arr[1].back()) {
				s=&arr[0]; t=&arr[1];
				x=arr[0].back(); y=arr[1].back();
			} else {
				s=&arr[1]; t=&arr[0];
				x=arr[1].back(); y=arr[0].back();
			}

			if (z>y) {(*s).push_back(z); ans++;}
			else if (z<x) (*s).push_back(z);
			else if (z<y && z>x) (*t).push_back(z);  
		}		
		cout << ans << '\n';
	}

	return 0;
}
