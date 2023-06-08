#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll long long int
#define eb emplace_back
#define f(i,n) for(int i = 0 ; i < n ; i ++)
#define fb(i,n) for(int i = n - 1 ; i >= 0 ; i --)
#define test(t) ll t; cin>>t; while(t--)

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector <int> v;
    while (n != 0) {
        int digit;
        digit = n % 10;
        if (digit > 4) v.eb(9 - digit);
        else v.eb(digit);
        n /= 10;
    }
    if(v[v.size()-1] == 0) v[v.size()-1] = 9;

    fb(i, v.size()) cout << v[i];

}

int32_t main()
{
    fastIO;
    solve();

    return 0;
}
