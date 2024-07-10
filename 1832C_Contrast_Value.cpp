#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const ll maxN = 3e5+10;
ll a[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll n, inc=0, dec=0;
        stack<ll> st;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        st.push(a[0]);
        for (int i=1; i<n; i++) {
            if (a[i]>st.top()) {
                if (inc) st.pop(); 
                st.push(a[i]);
                inc=1; dec=0;
            } else if (a[i]<st.top()) {
                if (dec) st.pop(); 
                st.push(a[i]);
                dec=1; inc=0;
            } 

        }
        cout << st.size() << '\n';
    }

    return 0;
}
