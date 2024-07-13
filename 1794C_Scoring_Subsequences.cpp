#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxN = 1e5+10;
ll a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    
    while(t--) {
        ll n,k=0, min_ind=1;
        cin >> n;
        for (ll i=1; i<=n; i++) {
            cin >> a[i];
            k++;
            if (a[min_ind]<k) {
                min_ind++;
                k--;
            }
            cout << k << " "; 
        }
        cout << "\n";        
    } 
    
    return 0;
}
