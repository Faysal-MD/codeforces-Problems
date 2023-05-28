#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
#define ll long long int
#define nl "\n"
#define sz(x) (int)x.size()
#define eb emplace_back
#define f(i,n) for(int i = 0 ; i < n ; i ++)
#define f1(i,n) for(int i = 1 ; i <= n ; i ++)
#define fb(i,n) for(int i = n - 1 ; i >= 0 ; i --)
#define test(t) ll t; cin>>t; while(t--)

using namespace std;

void solve (){
    int cnt = 0;
    test(t){
        string st;
        cin >> st;
        int n = st.size();
        f(i, n) if(st[i] == st[i+1]) cnt++;        
    }
    cout << cnt << nl;  
}

int32_t main (){
    fastIO;
    solve();
    return 0;
}