#include <bits/stdc++.h>
using namespace std;
#define ll long long

// const ll maxN=1e5+10;
// ll a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin >> n;
    if (n==1) cout << "4";
    else{
        ll NS= (n+1)/2 +1, EW = n/2 + 1;

        // in up_down N goes from 0 to n/2
        // but NSSS and SSSN are the same so up_doown*=2 is WRONG!
        
        ll ans = NS*EW;
        if ( NS!=EW) ans*=2;

        cout << ans;
    }   

    return 0;
}
