#include <bits/stdc++.h>
using namespace std;
#define ll long long 
    
const ll maxN = 1e5+10;
ll y[maxN], x[maxN], v[maxN];
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--) {
        ll n, cnt=0;
        cin >> n;

        for (int i=0; i<n; i++){cin >> x[i];}
        for (int i=0; i<n; i++){cin >> y[i];}

        for (int i=0; i<n; i++) v[i]=y[i]-x[i];
        sort(v, v+n, greater<ll>());
        int i=0, j=n-1;
        while(i<j) {
            if (v[i]+v[j]>=0) {
                cnt++;
                i++;
                j--;
            } else j--;
        }
        
        cout << cnt << "\n";
    }
    return 0;
}
