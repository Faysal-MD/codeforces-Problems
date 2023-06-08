#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll long long int
#define nl "\n"
#define test(t) ll t; cin>>t; while(t--)

using namespace std;

void solve() {
    int n, k,a=0,b=0, cnt = 0;
    cin >> n >> k;
    
    for(int i = 0 ; i <= n ; i ++) {
        a = (i+k-2)/k;
        b = (n-i+k-1)/k; 
    }
    cout << min(n, (a+b)+1) << nl;   
}

int32_t main(){
    fastIO;

    test(t) solve();

    return 0;
}