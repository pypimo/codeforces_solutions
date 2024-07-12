#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxN = 2e5+10;
ll a[maxN], b[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    
    while(t--) {
        ll n, ans=0, max_diff=INT_MIN;
        cin >> n;
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        vector<ll> v;
        for (int i=1; i<=n; i++) {
            cin >> b[i];
            ll diff = a[i]-b[i];
            if (diff>max_diff) {
                max_diff=diff;
                ans=1;
                v = {i};
            } else if (diff==max_diff) {
                ans++;
                v.push_back(i);
            }
        }
        cout << ans << "\n";
        for (auto x : v) cout << x << " ";
        cout << "\n";
    } 
    
    return 0;
}
