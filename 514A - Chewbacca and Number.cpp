#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
#define ll long long int
#define nl "\n"
#define sz(x) (int)x.size()
#define f(i, n) for (int i = 0; i < n; i++)
#define test(t) ll t;cin >> t;while (t--)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>v;
    while(n != 0) {
        int lastDigit;
        lastDigit = n % 10;
        if(lastDigit > (9-lastDigit)) v.emplace_back(9-lastDigit);
        else v.emplace_back(lastDigit);
        n /= 10;    
    }

    // if(v.back() == 0) v.back() = 9;
    for(auto it = v.end()-1; it >= v.begin(); it-- ) {
        if(it ==  v.end()-1) if (*it == 0) *it = 9; 
        cout << *it;
    }
}

int32_t main()
{
    fastIO;
    solve();

    return 0;
}
