    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long 
     
    const ll maxN = 2e5+10;
    ll a[maxN];
        
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        ll n,q,sum=0,type,pos,x,sameval=0;
        cin >> n >> q;
        map<ll,ll> m;
        for (int i=1; i<=n; i++) {
            cin >> a[i];
            sum += a[i];
            m[i]=1;
        }
        while(q--) {
            cin >> type;
            if (type==1) {
                cin >> pos >> x;
                if (m[pos]) sum = sum-a[pos]+x;
                else  sum = sum-sameval+x;
                m[pos]=1;
                a[pos]=x;
            } else {
                cin >> x;
                sum = x*n;
                sameval=x;
                m.clear();
            }
            cout << sum << '\n';
        }
     
        return 0;
    }
