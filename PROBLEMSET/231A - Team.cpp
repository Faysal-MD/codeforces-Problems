#include <bits/stdc++.h>
#define fastIO    (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll        long long int
#define nl        endl
#define sz(x)     (int)x.size()
#define v(i)      vector<int>v[i];
#define sortv(a)  sort(a.begin(),a.end())
#define eb        emplace_back
#define cout(q)   cout<<q<<endl; 
#define f(i,n)    for(int i = 0 ; i < n ; i ++)
#define f1(i,n)   for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)   for(int i = n - 1 ; i >= 0 ; i --)
#define test(t)   ll t; cin>>t; while(t--)

using namespace std;

void solve() {
    int n, cnt = 0;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a+b >= 2 || b+c >= 2 || a+c >= 2 || a+b+c >= 2) {
            cnt++;
        }   
    }
    cout(cnt);
}

int32_t main() {
    fastIO;
    solve();
    
    return 0;
}