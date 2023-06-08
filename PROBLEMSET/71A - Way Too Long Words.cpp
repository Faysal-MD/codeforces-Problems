#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)x.size()
#define f(i, n) for (int i = 0; i < n; i++)

void solve()
{
    string s;
    cin >> s;

    
    if (sz(s) > 10)
    {
        f(i, sz(s))
        {
            cout << s[i] << sz(s) - 2 << s[sz(s) - 1] << '\n';
            break;
        }
    }
    else
        cout << s << '\n';
}

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
