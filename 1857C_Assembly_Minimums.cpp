#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const ll maxN = 1e6+10;
ll a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll n,ind=0,k=0, tt, last;
        cin >> tt;

        n  = (tt*(tt-1))/2;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        while(ind<n) {
            cout << a[ind] << " ";
            last = a[ind];
            k++;
            if (tt-k<=0) break;
            ind +=(tt-k);
        }
        cout << last << '\n';
    }

    return 0;
}
