#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll long long int
#define nl "\n"
#define f(i,n) for(int i = 0 ; i < n ; i ++)
#define test(t) ll t; cin>>t; while(t--)

using namespace std;

void solve() {
    int x = 0;
    
    test(t) {
        string s;
        cin >> s;
        if(s == "++X" || s == "X++") x++;
        else x--;
    }
    cout << x;
}

int32_t main(){

    fastIO;
    solve();

    return 0;
}