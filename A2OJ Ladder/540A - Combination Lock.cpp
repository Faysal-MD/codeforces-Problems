#include <bits/stdc++.h>
#define fastIO          (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define fo(i, n)        for(int i = 0; i < n; i++)

using namespace std;

void solve() {
    int n, sum = 0;
    string a, b;
    cin >> n >> a >> b;
    
    fo(i, n) {
        sum += min(abs(a[i] - b[i]), 10 - (abs(a[i] - b[i])));
    }
    cout << sum;
}

int32_t main() {
    fastIO;
    solve();
    
    return 0;
}