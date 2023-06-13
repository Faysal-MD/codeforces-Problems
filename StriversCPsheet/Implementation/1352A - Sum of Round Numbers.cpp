#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll long long int
#define nl "\n"
#define f(i,n) for(int i = 0 ; i < n ; i ++)
#define test(t) ll t; cin>>t; while(t--)

using namespace std;

void solve() {
    int n;
    cin >> n;
    int len = 0;
    int digit;
    set <int> s;
    while(n != 0) {
        digit = n % 10;
        s.insert(digit);
        len++;
        digit =  digit * pow(10, len);
        if (digit == 0) break;
        n /= 10;
        cout << digit << " ";
    }
    // cout << nl << s.size() << nl;
    // cout << digit << " " << nl;
}

int32_t main(){
    fastIO;

    test(t) solve();

    return 0;
}