#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));

using namespace std;

void solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int x = ((k * l)/nl)/n;
    int y = (c * d)/n;
    int z = (p / np)/n;

    x = min(x, y);
    z = min(x,z);

    cout << z;
}

int32_t main(){
    fastIO;
    solve();
    return 0;
}