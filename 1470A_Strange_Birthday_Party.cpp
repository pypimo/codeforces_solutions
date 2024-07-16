#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxN=3e5+10;
ll a[maxN], b[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll n, m;    
        cin >> n >> m;
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        for (int i=1; i<=m; i++) {
            cin >> b[i];
        }
        sort(a+1, a+n+1, greater<ll>());
        ll gift=1, sum=0;
        for (int i=1; i<=n; i++) {
            if (b[gift]<b[a[i]] && gift<=i) {
                sum+=b[gift];
                gift++;
            } else sum += b[a[i]];
        }
        cout << sum << '\n';
    }

    return 0;
}
