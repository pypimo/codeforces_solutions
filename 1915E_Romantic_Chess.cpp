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
        ll n, var1=0, var2=0,x,f=0;
        cin >> n;
        map<ll,ll> m;
        m[0]++;
        for (int i=1; i<=n; i++) {
            cin >> x;
            if (i%2) var1+=x;
            else var2+=x;
            m[var1-var2]++;
            if (m[var1-var2]>1) f=1;
        }
        if (f) cout << "YES\n";
        else cout << "NO\n";
    } 
    
    return 0;
}
