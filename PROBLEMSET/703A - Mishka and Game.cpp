#include <bits/stdc++.h>
#define ll          long long int
#define fastIO      (ios::sync_with_stdio(0),cin.tie(0));
#define re          return 0;
#define nl          "\n"
#define f(i,n)      for(int i = 0 ; i < n ; i ++)
#define f1(i,n)     for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)     for(int i = n - 1 ; i >= 0 ; i --)
#define v(i)        vector<int>v[i];
#define sortv(a)    sort(a.begin(),a.end())
#define test(t)     ll t; cin>>t; while(t--)
#define YES         cout<<"YES"<<endl
#define NO          cout<<"NO"<<endl

using namespace std;

void solve() {
    int cnt1 = 0, cnt2 = 0;
    test (t){
        int a, b;

        cin >> a >> b;
        
        if (a > b) cnt1++;
        else if (a < b) cnt2++;    
    }

    if (cnt1 > cnt2) cout << "Mishka" << nl;
    else if (cnt1 < cnt2) cout << "Chris" << nl;
    else cout << "Friendship is magic!^^" << nl;
}

int32_t main() {
    solve();
    re;
}
