#include <bits/stdc++.h>
#define fastIO          (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define fo(i, n)        for(int i = 0; i < n; i++)

using namespace std;

void solve() {
    int n, m, c = 0;
    string s;
    cin >> n >> m;

    while(n--) {
        fo(i, m) {
            int x, y;
            cin >> x >> y;
            if(x == 1 || y == 1) c++;
        }
    }
    cout << c;
}

int32_t main() {
    fastIO;
    solve();
    
    return 0;
}