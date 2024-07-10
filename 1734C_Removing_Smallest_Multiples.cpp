#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const ll maxN = 2e5+10;
ll ps[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll n, ans=0;
        cin >> n;
        string s;
        cin >> s;
        for (int i=1; i<=n; i++) {
            if (s[i-1]=='1') continue;
            for (int j=i; j<=n; j+=i) {
                if (s[j-1]=='1') break;
                if (s[j-1]=='2') continue;
                s[j-1]='2';
                ans += i;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
