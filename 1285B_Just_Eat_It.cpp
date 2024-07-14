#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxN= 1e5+10; 
ll a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--) {
        ll n, sum=0, maxseg=INT_MIN;
        cin >> n;
        for (int i=0; i<n; i++ ) {
            cin >> a[i];
            sum += a[i];
        }
        ll curr=0;
        for (int i=0; i<n-1; i++) {
            curr+=a[i];
            maxseg = max(maxseg, curr);
            curr = max(0ll,curr);
        }
        curr=0;
        for (int i=n-1; i>0; i--) {
            curr+=a[i];
            maxseg = max(maxseg, curr);
            if (curr<0) break;
        }
        
        //cout << maxseg << " " << sum << '\n';
        if (maxseg<sum) cout << "YES\n";
        else cout << "NO\n";
    }

    
    return 0;
}
