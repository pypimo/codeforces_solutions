#include <bits/stdc++.h>
using namespace std;
#define ll long long

// const ll maxN=1e5+10;
// ll a[maxN];

bool compare(pair<ll ,ll> p1, pair<ll ,ll> p2) {
    return p1.first<p2.first;
    return p1.second>=p2.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;
    cin >> t;
    while(t--) {
        ll n,m, start, end,x;
        cin >> n;
        vector<pair<int,int>> v;
        // fight monsters in given order so cant sort
        while(n--) {    
            cin >> m;
            ll start=0;
            for (int i=0; i<m; i++) {
                cin >> x;
                start=max(start, x+1-i);
            }
            v.push_back({start, start+m});
        }

        sort(v.begin(), v.end(), compare);
        start=v[0].first, end=v[0].second;
        //cout << start << " "  << end << "\n";
        for (int i=1; i<v.size(); i++) {    
            ll f=v[i].first, e=v[i].second;
            //cout << f << " "  << e << "\n";
            if (end<=f) {
                start+=f-end;
                end=e;
            } else end += e-f;
        }
        cout << start << '\n';
    }

    return 0;
}
