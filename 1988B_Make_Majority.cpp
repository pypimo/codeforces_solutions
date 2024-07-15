#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxN=1e5+10;
ll a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--) {
        ll n,W;
        cin >> n >> W;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        ll i=-1, j=n-1, ans=0, curr=0;
        while(i<j) {
            curr+=a[j];
            while(i<j) {
                i++;
                curr+=a[i];
                if (curr>W) {
                    i--;
                    break;
                }
            }
            ans++;
            curr=0;
            j--;
        }
        cout << ans << '\n';
    }

    return 0;
}
