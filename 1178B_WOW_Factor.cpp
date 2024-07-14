#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin >> s;

    ll n = s.size(),cnt_w=0, cnt_o=0, ans=0;
    for (int i=0; i<n-1; i++ ) {
        if (s.substr(i, 2)=="vv") {
            ans+=cnt_o;
            cnt_w++;
        } else if (s[i]=='o') cnt_o+=cnt_w;
    }
    cout <<ans;

    return 0;
}
