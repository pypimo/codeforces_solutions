#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxN = 2e5+10;
ll a[maxN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	int n = s.size();
	for (int i=0; i<n-1; i++) {
		int x=s[i+1]-'a', y=-1,j;
		if (i!=n-2) y=s[i+2]-'a';
		if (s[i]==s[i+1]) {
			for (j=0; j<=25; j++) {
				if (j!=x && j!=y) break;
			}
			s[i+1]=char('a'+j);
		}
	}
	cout << s;	

	return 0;
}
