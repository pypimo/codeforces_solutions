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
        ll ct=1, ans=0, x=1,n;    
        string s;
        cin >> s;
        n=s.size();
        for (int i=1; i<n; i++) {
            if (s[i]==s[i-1]) {
                ct++;
                ans++;
            } else {
                x = multiply(x,ct); // choose 1 or 0 from single block
                ct=1;
            } 
        }
        x = multiply(x,ct);

		// now removed indicies are ans
		// x += (n-ans)!  for permutating removal of indicies
		for (int i=1; i<=ans; i++) x = multiply(x,i);
        cout << ans << " " << x  << "\n";
    } 
    
    return 0;
}
