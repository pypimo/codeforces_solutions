    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long 
     
    // const ll maxN = 2e5+10;
    // ll a[maxN];
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        ll t;
        cin >> t;
     
        while(t--) {
            ll n, ans=0,cnt0=0,cnt1=0,row,col;
            cin >> n;
            string a[n];
            for (int i=0; i<n; i++) {
                cin >> a[i];
            }
     
            // make corners equal
            for (int i=0; i<=n/2; i++) {
                cnt0=0, cnt1=0;
                vector<pair<ll,ll>> p {{i,i}, {n-i-1,i}, {i,n-i-1}, {n-i-1, n-i-1}};
                for (auto x : p) {
                    row=x.first, col=x.second;
                    if (a[row][col]=='1') cnt1++;
                    else cnt0++;
                }
     
                for (auto x : p) {
                    row=x.first, col=x.second;
                    if (cnt1>=cnt0) a[row][col]='1';
                    else a[row][col]='0';
                }
                
                ans += min(cnt1, cnt0);
     
            }
     
            for (int i=0; i<=n/2; i++) {
                vector<vector<char>> v(4);
                for (int j=i; j<n-i; j++) {
                    vector<pair<ll,ll>> p {{i,j}, {n-i-1,j}, {j,i}, {j, n-i-1}};
                    for (int k=0; k<4; k++) {
                        row = p[k].first; col = p[k].second;
                        v[k].push_back(a[row][col]);
                    }
                }
                reverse(v[2].begin(), v[2].end());
                reverse(v[1].begin(), v[1].end());
     
                for (int j=0; j<v[0].size(); j++) {
                    cnt0=0, cnt1=0;
                    for (int k=0; k<4; k++) {
                        if (v[k][j]=='1') cnt1++;
                        else cnt0++;
                    }
                    ans+=min(cnt0, cnt1);;     
                }
     
                // for (int k=0; k<4; k++) {
                //     for (int j=0; j<v[0].size(); j++) {
                //         cout << v[k][j] << " ";
                //     }
                //     cout<< "\n";
                // }
                // cout << '\n';
            }
            cout << ans << '\n';
        }
        return 0;
    }
