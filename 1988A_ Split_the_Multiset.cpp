#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    
    while(t--) {
        ll n, k;
        cin >> n >> k;
        ll u=n, ans=0;
        while(u>1) {
            u=u-k+1;
            ans++;
        }
        cout << ans << '\n';
    } 
    
    return 0;
}
