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
            ll n, x, y, same,lcm;
            cin >> n >> x >> y;
            lcm = (x*y)/gcd(x,y);
            same = n/lcm;
            x = (n/x)-same; y=(n/y)-same;
            ll s2 = n*x - ((x-1)*x)/2, s1 = (y*(y+1))/2, ans=s2-s1;
            cout << ans << '\n';
        }
     
        return 0;
    }
