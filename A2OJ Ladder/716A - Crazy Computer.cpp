#include <bits/stdc++.h>
#define fastIO    (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll        long long int
#define nl        endl
#define sz(x)     (ll)x.size()
#define v(i)      vector<int>v[i];
#define vec       vector<int>vec;
#define sortv(a)  sort(a.begin(),a.end())
#define eb        emplace_back
#define cout(q)   cout<<q<<endl; 
#define pyes      cout<<"YES"<<endl 
#define pno       cout<<"NO"<<endl
#define f(i,n)    for(int i = 0 ; i < n ; i ++)
#define f1(i,n)   for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)   for(int i = n - 1 ; i >= 0 ; i --)
#define FO(x) for (int i = 0; i < x; i++)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define ROF(x) for (int i = x; i >= 0; i--)
#define test(t)   ll t; cin>>t; while(t--)

using namespace std;

void solve() {
    int n, c, cnt = 0;
    cin >> n >> c;
    int a[n];

    f(i, n) cin >> a[i];
    f(i, n-1) {
        if ((abs(a[i+1] - a[i])) > c) cnt = 0;
        else cnt++;
    }
    cout(cnt+1); 
}

int32_t main() {
    /*if input file is given and output file needs to be generated
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
    fastIO;
    solve();
    
    return 0;
}