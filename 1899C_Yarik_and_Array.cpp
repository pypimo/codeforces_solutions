#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const ll maxN = 2e5+10;
ll a[maxN], b[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll n, ans=INT_MIN, s=0,even=0, odd=0;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];

            if ((odd && a[i]%2) || (even && a[i]%2==0) ) {
                s=a[i];
            } else {
                s+=a[i];
                if (a[i]%2) {odd=1; even=0;}
                else {odd=0; even=1;}
            }
            ans = max(ans,s);
            if (s<0) {s=0; odd=0; even=0;} 
        }
        cout << ans  << '\n';
    }

    return 0;
}
