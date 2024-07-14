#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxN= 1e5+10; 
int a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--) {
        ll n,x,m;
        cin >> n >> x >> m;
        ll mini = x, maxi=x;
        while(m--) {
            ll l,r;
            cin >> l >> r;
            if (!(maxi<l || r<mini)) {
                mini = min(mini, l);
                maxi = max(maxi, r);
            }
        }
        cout << maxi-mini+1 << '\n';
    }

    
    return 0;
}
