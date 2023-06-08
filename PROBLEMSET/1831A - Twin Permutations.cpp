#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll long long int
#define nl "\n"
#define f(i,n) for(int i = 0 ; i < n ; i ++)
#define test(t) ll t; cin>>t; while(t--)

using namespace std;

void solve() {
    int n;
    cin>>n;
    int arr[n];

    f(i, n) {
        cin >> arr[i];
        cout << n+1-arr[i] << " ";
    }

    cout << nl;
}

int32_t main(){
    fastIO;
    test(t) solve();

    return 0;
}
