#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxN = 1e5+10;
ll a[maxN], b[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        cin >> b[i];
    }
    reverse(a, a+n);
    reverse(b, b+n);

    map<ll,ll> overtake;
    ll i=0, j=0;
    while(i<n && j<n) {
        if (a[i]!=b[j]) {
            if (!overtake.count(b[j])) {
                //cout << a[i] << " " << b[j] << "\n";
                overtake[a[i]]++; 
                i++;
            } else j++;
        } else {
            i++;
            j++;
        }
    }
    cout << overtake.size();
    //for (auto x : overtake) cout << x.first << " " << x.second << "\n";
    return 0;
}
