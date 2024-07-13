#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    
    while(t--) {
        ll k, x, mid, sum;
        cin >> k >> x;
        ll l=1, r=2*k-1, ans=r;
        while(l<=r) {
            mid = l+(r-l)/2;
            if (mid<=k) sum =  (mid*(mid+1))/2;
            else {
                ll val = mid-k;
                sum  = (k*(k+1))/2 + val*k - ((val*(val+1))/2);
            }
            if (sum>=x) {
                ans = mid;
                r = mid-1;
            }  else l=mid+1;
        }   
        cout << ans << "\n";
    } 
    
    return 0;
}
