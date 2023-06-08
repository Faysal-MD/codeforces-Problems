#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));

using namespace std;

void solve()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int n1 = min({x1, x2, x3});
    int n2 = max({x1, x2, x3});

    cout << abs(n1 - n2);
}

int32_t main()
{
    fastIO;
    solve();
    return 0;
}